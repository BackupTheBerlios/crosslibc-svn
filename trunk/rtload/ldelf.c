/* Runtime loader support for ELF */

/*
 * Copyright (c) 2007  Gregor Richards
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#include "ldelf.h"

#include "elf.h"
#include "exec.h"

struct ElfFile {
    char *nm;
    void *prog;
    size_t psz;
    
    void *alloc; /* where this file will be allocated */
    void *min, *max; /* its internal view of allocation */
    
    /* the ELF header */
    Elf32_Ehdr *ehdr;
    
    /* prerequisite libraries [as indexes into the string table] */
#define NEEDED_SZ 255
    Elf32_Word needed[NEEDED_SZ];
    int neededC;
    
    /* assorted dynamic sections */
    void *pltgot, *hash;
    
    char *strtab;
    Elf32_Word strsz;
    
    Elf32_Sym *symtab;
    Elf32_Word symsz, syment;
    
    Elf32_Rel *reltab;
    Elf32_Word relsz, relent;
    
    Elf32_Rela *relatab;
    Elf32_Word relasz, relaent;
    
    void *init, *fini;
    
    Elf32_Word rpath;
    
    char symbolic; /* bool */
    
    void *pltrel;
    Elf32_Word pltrelsz;
    
    void *jmprel;
};

void loadELF(void *prog, size_t psz,
             char *nm, int argc, char **argv, char **envp,
             bbuffer_t bbuffer)
{
    /* We can have at max 255 files (can't just reallocate wildly on the
     * stack) */
#define FILES_SZ 255
    struct ElfFile files[FILES_SZ];
    struct ElfFile *f;
    int fileC = 1;
    int onFile = 0;
    
    void *cur, *min, *max; /* minimum and maximum total allocation */
    int i, j;
    Elf32_Shdr *curshdr;
    Elf32_Phdr *curphdr;
    union {
        int i;
        char c[2];
    } endianCheck;
    
    INLINE_MEMZERO(&files, FILES_SZ * sizeof(struct ElfFile));
    
    /* start up file 0 */
    f = &(files[0]);
    f->nm = nm;
    f->prog = prog;
    f->psz = psz;
    f->ehdr = (Elf32_Ehdr *) prog;
    
    /* and using no memory */
    min = ((void *) -1);
    max = NULL;
    
    elfstepone: /* load in a file from the list */
    
    /* Sanity */
    if (f->psz < sizeof(Elf32_Ehdr) ||
        f->ehdr->e_ident[0] != '\x7f' ||
        f->ehdr->e_ident[1] != 'E' ||
        f->ehdr->e_ident[2] != 'L' ||
        f->ehdr->e_ident[3] != 'F') {
        _xact_fprintf(stderr, "%s does not appear to be a vaild ELF binary.\n", f->nm);
        _xact_exit(1);
    }
    
    /* Only 32-bit supported right now */
    if (f->ehdr->e_ident[4] != ELFCLASS32) {
        _xact_fprintf(stderr, "%s is not a 32-bit ELF binary.\n", f->nm);
        _xact_exit(1);
    }
    
    /* Check the endianness */
    endianCheck.i = 1;
    if ((endianCheck.c[0] == 1 &&
         f->ehdr->e_ident[5] != ELFDATA2LSB) ||
        (endianCheck.c[0] == 0 &&
         f->ehdr->e_ident[5] != ELFDATA2MSB)) {
        _xact_fprintf(stderr, "%s is of the wrong endianness.\n", f->nm);
        _xact_exit(1);
    }
    
    /* Make sure it's an executable */
    if (f->ehdr->e_type != ET_EXEC) {
        _xact_fprintf(stderr, "%s is not an executable.\n", f->nm);
        _xact_exit(1);
    }
    
    /* 1) Figure out the mapping */
    f->min = ((void *) -1);
    f->max = NULL;
    
    /* Go through each section */
    if (f->ehdr->e_phoff) {
        cur = f->prog + f->ehdr->e_phoff - f->ehdr->e_phentsize;
        for (i = f->ehdr->e_phnum; i > 0; i--) {
            /* Get to the right entry */
            cur += f->ehdr->e_phentsize;
            curphdr = (Elf32_Phdr *) cur;
            
            /* Perhaps load it in */
            if (curphdr->p_type == PT_LOAD) {
                if ((void *) curphdr->p_vaddr < f->min) {
                    f->min = (void *) curphdr->p_vaddr;
                }
                if ((void *) curphdr->p_vaddr + curphdr->p_memsz > f->max) {
                    f->max = (void *) curphdr->p_vaddr + curphdr->p_memsz;
                }
                
            } else if (curphdr->p_type == PT_DYNAMIC) {
                Elf32_Dyn *dynfo = (Elf32_Dyn *) (f->prog + curphdr->p_offset);
                
                if (dynfo->d_tag == DT_NEEDED) {
                    /* add a prerequisite library */
                    f->needed[f->neededC] = dynfo->d_un.d_val;
                    f->neededC++;
                    if (f->neededC >= NEEDED_SZ)
                        f->neededC = NEEDED_SZ - 1;
                    
                }
            }
        }
    }
    
    /* FIXME: more file loading goes here */
    
    min = f->min;
    max = f->max;
    f->alloc = min;
    
    _xact_fprintf(stdout, "Foo %p %p.\n", min, max);
    
    /* 2) Load in the actual data */
    bbuffer(min, max - min);
    
    /* For every file ... */
    onFile = 0;
    f = &(files[0]);
    elfsteptwo:
    
    /* Go through each section */
    if (f->ehdr->e_phoff) {
        cur = f->prog + f->ehdr->e_phoff - f->ehdr->e_phentsize;
        for (i = f->ehdr->e_phnum; i > 0; i--) {
            /* Get to the right entry */
            cur += f->ehdr->e_phentsize;
            curphdr = (Elf32_Phdr *) cur;
            
            /* Perhaps load it in */
            if (curphdr->p_type == PT_LOAD) {
                INLINE_MEMZERO(curphdr->p_vaddr, curphdr->p_memsz);
                INLINE_MEMCPY(curphdr->p_vaddr, f->prog + curphdr->p_offset, curphdr->p_filesz);
            }
        }
    }
    
    /* Perhaps loop */
    onFile++;
    if (onFile < fileC) {
        f = &(files[onFile]);
        goto elfsteptwo;
    }
    
    /* Now run! */
    EXEC_REORDERED(files[0].ehdr->e_entry);
}

void loadELFEnd() {}

int isELF(void *prog, size_t psz)
{
    /* Elf32_Ehdr is the header to this file */
    Elf32_Ehdr *ehdr = (Elf32_Ehdr *) prog;
    
    if (psz < sizeof(Elf32_Ehdr) ||
        ehdr->e_ident[0] != '\x7f' ||
        ehdr->e_ident[1] != 'E' ||
        ehdr->e_ident[2] != 'L' ||
        ehdr->e_ident[3] != 'F') {
        return 0;
    }
    return 1;
}
