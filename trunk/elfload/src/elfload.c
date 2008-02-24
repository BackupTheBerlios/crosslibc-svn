#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

#include "../config.h"

#ifdef HAVE_MMAP
#include <sys/mman.h>
#endif

#ifdef HAVE_DLFCN_H
#include <dlfcn.h>
#endif

#include "elfload.h"

/* An array of files currently in the process of loading */
#define MAX_ELF_FILES 255
struct ELF_File elfFiles[MAX_ELF_FILES];
int elfFileCount = 0;

/* The function to actually load ELF files into memory */
struct ELF_File *loadELF(char *nm)
{
    int i, fileNo, phdri;
    struct ELF_File *f;
    void *curphdrl;
    Elf32_Phdr *curphdr;
    Elf32_Dyn *curdyn;

    /* first, make sure it's not already loaded or loading */
    for (i = 0; i < elfFileCount; i++) {
        if (strcmp(elfFiles[i].nm, nm) == 0) return &(elfFiles[i]);
    }

    /* now start preparing to load it */
    fileNo = elfFileCount;
    f = &(elfFiles[fileNo]);
    memset(f, 0, sizeof(struct ELF_File));
    elfFileCount++;
    f->nm = strdup(nm);

    /* if this is a host library, circumvent all the ELF stuff and go straight for the host */
    if (strncmp(nm, "libhost_", 8) == 0) {
        f->hostlib = 1;
#ifdef HAVE_DLFCN_H
        f->prog = dlopen(nm + 8, RTLD_NOW|RTLD_GLOBAL);
        if (f->prog == NULL) {
            fprintf(stderr, "Could not resolve host library %s.\n", nm + 8);
            exit(1);
        }
#else
        fprintf(stderr, "This version of elfload is not capable of loading the host library %s.\n",
                nm + 8);
        exit(1);
#endif
        return f;
    }

    readFile(nm, f);

    /* make sure it's an ELF file */
    f->ehdr = (Elf32_Ehdr *) f->prog;
    if (memcmp(f->ehdr->e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "%s does not appear to be an ELF file.\n", nm);
        exit(1);
    }

    /* only 32-bit supported for the moment */
    if (f->ehdr->e_ident[EI_CLASS] != ELFCLASS32) {
        fprintf(stderr, "%s is not a 32-bit ELF file.\n", nm);
        exit(1);
    }

    /* FIXME: check endianness */

    /* must be an executable or .so to be loaded */
    if (f->ehdr->e_type != ET_EXEC &&
        f->ehdr->e_type != ET_DYN) {
        fprintf(stderr, "%s is not an executable or shared object file.\n", nm);
        exit(1);
    }

    /* now go through program headers, to find the allocation space of this file */
    f->min = (void *) -1;
    f->max = 0;
    curphdrl = f->prog + f->ehdr->e_phoff - f->ehdr->e_phentsize;

    for (phdri = 0; phdri < f->ehdr->e_phnum; phdri++) {
        curphdrl += f->ehdr->e_phentsize;
        curphdr = (Elf32_Phdr *) curphdrl;

        /* perhaps check its location */
        if (curphdr->p_type == PT_LOAD) {
            /* adjust min/max */
            if ((void *) curphdr->p_vaddr < f->min) {
                f->min = (void *) curphdr->p_vaddr;
            }
            if ((void *) curphdr->p_vaddr + curphdr->p_memsz > f->max) {
                f->max = (void *) curphdr->p_vaddr + curphdr->p_memsz;
            }
        }
    }

    /* with this size info, we can allocate the space */
    f->memsz = f->max - f->min;
#ifdef HAVE_MMAP
    /* if this is a binary, try to allocate it in place. elfload is addressed above 0x18000000 */
    if (f->ehdr->e_type == ET_EXEC && f->max < (void *) 0x18000000) {
        f->loc = mmap(f->min, f->memsz, PROT_EXEC|PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS|MAP_FIXED,
                      -1, 0);

    } else {
        f->loc = mmap(NULL, f->memsz, PROT_EXEC|PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS,
                      -1, 0);
    }
    if (f->loc == NULL) {
        perror("mmap");
        exit(1);
    }
    memset(f->loc, 0, f->memsz);

#else
    f->loc = calloc(f->memsz, 1);
    if (f->loc == NULL) {
        perror("calloc");
        exit(1);
    }

#endif

    f->offset = f->loc - f->min;

    /* we have the space, so load it in */
    curphdrl = f->prog + f->ehdr->e_phoff - f->ehdr->e_phentsize;
    for (phdri = 0; phdri < f->ehdr->e_phnum; phdri++) {
        curphdrl += f->ehdr->e_phentsize;
        curphdr = (Elf32_Phdr *) curphdrl;

        /* perhaps load it in */
        if (curphdr->p_type == PT_LOAD) {
            if (curphdr->p_filesz > 0) {
                /* OK, there's something to copy in, so do so */
                memcpy((void *) curphdr->p_vaddr + f->offset,
                       f->prog + curphdr->p_offset,
                       curphdr->p_filesz);
            }

        } else if (curphdr->p_type == PT_DYNAMIC) {
            /* we need this to load in dependencies, et cetera */
            f->dynamic = (Elf32_Dyn *) (f->prog + curphdr->p_offset);

        }
    }
    
    /* now go through dynamic entries, looking for basic vital info */
    for (curdyn = f->dynamic; curdyn && curdyn->d_tag != DT_NULL; curdyn++) {
        if (curdyn->d_tag == DT_STRTAB) {
            f->strtab = (char *) (curdyn->d_un.d_ptr + f->offset);

        } else if (curdyn->d_tag == DT_SYMTAB) {
            f->symtab = (Elf32_Sym *) (curdyn->d_un.d_ptr + f->offset);

        } else if (curdyn->d_tag == DT_HASH) {
            f->hashtab = (Elf32_Word *) (curdyn->d_un.d_ptr + f->offset);

        } else if (curdyn->d_tag == DT_RELA) {
            f->rela = (Elf32_Rela *) (curdyn->d_un.d_ptr + f->offset);

        } else if (curdyn->d_tag == DT_RELASZ) {
            f->relasz = curdyn->d_un.d_val;

        } else if (curdyn->d_tag == DT_REL) {
            f->rel = (Elf32_Rel *) (curdyn->d_un.d_ptr + f->offset);

        } else if (curdyn->d_tag == DT_RELSZ) {
            f->relsz = curdyn->d_un.d_val;

        } else if (curdyn->d_tag == DT_JMPREL) {
            f->jmprel = (void *) (curdyn->d_un.d_ptr + f->offset);

        } else if (curdyn->d_tag == DT_PLTRELSZ) {
            f->jmprelsz = curdyn->d_un.d_val;

        }
    }

    /* load in dependencies */
    for (curdyn = f->dynamic; curdyn && curdyn->d_tag != DT_NULL; curdyn++) {
        if (curdyn->d_tag == DT_NEEDED) {
            loadELF(f->strtab + curdyn->d_un.d_val);
        }
    }

    /* do processor-specific relocation */
#if defined(__i386__) || defined(__i386) || defined(_M_IX86) || defined(_X86_)
#define REL_P ((ssize_t) (currel->r_offset + f->offset))
#define REL_S ((ssize_t) (findELFSymbol( \
                f->strtab + f->symtab[ELF32_R_SYM(currel->r_info)].st_name, \
                fileNo, -1, NULL)))
#define REL_A (*((ssize_t *) REL_P))
#define WORD32_REL(to) REL_A = (ssize_t) (to)

    /* we ought to have rel and symtab defined */
    if (f->rel && f->symtab) {
        Elf32_Rel *currel = f->rel;
        for (; (void *) currel < (void *) f->rel + f->relsz; currel++) {
            switch (ELF32_R_TYPE(currel->r_info)) {
                case R_386_32:
                    WORD32_REL(REL_S + REL_A);
                    break;

                case R_386_PC32:
                    WORD32_REL(REL_S + REL_A - REL_P);
                    break;

                case R_386_COPY:
                {
                    /* this is a bit more convoluted, as we need to find it in both places and copy */
                    Elf32_Sym *localsym, *sosym;
                    localsym = &(f->symtab[ELF32_R_SYM(currel->r_info)]);
                    void *soptr = findELFSymbol(
                            f->strtab + localsym->st_name,
                            -1, fileNo, &sosym);

                    /* OK, we should have both, so copy it over */
                    if (localsym && sosym) {
                        memcpy((void *) (localsym->st_value + f->offset),
                               soptr, sosym->st_size);
                    } /* FIXME: else */

                    break;
                }

                case R_386_RELATIVE:
                    WORD32_REL(f->loc + REL_A);
                    break;
            }
        }
    }

    if (f->jmprel && f->symtab) {
        Elf32_Rel *currel = (Elf32_Rel *) f->jmprel;
        for (; (void *) currel < f->jmprel + f->jmprelsz; currel++) {
            switch (ELF32_R_TYPE(currel->r_info)) {
                case R_386_JMP_SLOT:
                    WORD32_REL(REL_S);
                    break;
            }
        }
    }


#else
#error Unsupported architecture.
#endif

    return f;
}

/* Find a symbol within the currently loaded ELF files
 * localin: The number of the current file, where STB_LOCAL symbols are OK
 * notin: Do not bind to symbols in this file 
 * Either can be -1 */
void *findELFSymbol(char *nm, int localin, int notin, Elf32_Sym **syminto)
{
    int i;
    struct ELF_File *f;
    Elf32_Word hash = elf_hash((unsigned char *) nm);
    Elf32_Word bucket, index;
    Elf32_Sym *sym;
    void *hostsym;

    if (nm[0] == '\0') return NULL;

    for (i = 0; i < elfFileCount; i++) {
        if (i == notin) continue;

        f = &(elfFiles[i]);

        /* if this is a host library, just try the host method */
        if (f->hostlib) {
#ifdef HAVE_DLFCN_H
            hostsym = dlsym(f->prog, nm);
            if (hostsym) return hostsym;
#endif
            continue;
        }

        /* figure out the bucket ... */
        bucket = hash % ELFFILE_NBUCKET(f);

        /* then find the chain entry */
        index = ELFFILE_BUCKET(f, bucket);

        /* and work our way through the chain */
        for (; index != STN_UNDEF; index = ELFFILE_CHAIN(f, index)) {
            sym = &(f->symtab[index]);

            /* see if it's defined */
            if (strcmp(f->strtab + sym->st_name, nm) == 0 &&
                (i == localin || ELF32_ST_BIND(sym->st_info) != STB_LOCAL) &&
                sym->st_shndx != SHN_UNDEF) {
                /* we found our symbol! */
                if (syminto != NULL) {
                    *syminto = sym;
                }
                return (void *) (sym->st_value + f->offset);
            }
        }
    }

    /* uh oh, not found! */
    fprintf(stderr, "Symbol undefined: '%s'\n", nm);
    return NULL;
}

/* The standard ELF hash function */
Elf32_Word elf_hash(const unsigned char *name)
{
    Elf32_Word h = 0, g;

    while (*name) {
        h = (h << 4) + *name++;
        if (g = h & 0xf0000000)
            h ^= g >> 24;
        h &= ~g;
    }
    return h;
}

/* A handy function to read a file or mmap it, as appropriate */
void readFile(char *nm, struct ELF_File *ef)
{
#ifdef HAVE_MMAP
    void *buf;
    struct stat sbuf;
    int fd;

    /* use mmap. First, open the file and get its length */
    fd = open(nm, O_RDONLY);
    if (fd == -1) {
        perror(nm);
        exit(1);
    }
    if (fstat(fd, &sbuf) < 0) {
        perror(nm);
        exit(1);
    }

    /* then mmap it */
    buf = mmap(NULL, sbuf.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
    if (buf == NULL) {
        perror("mmap");
        exit(1);
    }

    close(fd);

    /* and put it in ef */
    ef->prog = buf;
    ef->proglen = sbuf.st_size;

#else
    char *buf;
    int bufsz, rdtotal, rd;
    FILE *f;

    /* OK, use stdio */
    f = fopen(nm, "rb");
    if (f == NULL) {
        perror(nm);
        exit(1);
    }
    
    /* start with a 512-byte buffer */
    bufsz = 512;
    buf = (char *) malloc(bufsz);
    if (buf == NULL) {
        perror("malloc");
        exit(1);
    }

    /* and read in the file */
    rdtotal = 0;
    while ((rd = fread(buf + rdtotal, 1, bufsz - rdtotal, f)) != 0) {
        rdtotal += rd;
        if (rdtotal != bufsz) {
            /* done reading */
            break;
        }
    }
    if (ferror(f)) {
        perror(nm);
        exit(1);
    }
    fclose(f);

    /* now put it in ef */
    ef->prog = buf;
    ef->proglen = rdtotal;

#endif
}

/* The finalization function for readFile */
void closeFile(struct ELF_File *ef)
{
#ifdef HAVE_MMAP
    munmap(ef->prog, ef->proglen);
#else
    free(ef->prog);
#endif
}
