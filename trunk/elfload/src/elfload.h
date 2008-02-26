#ifndef ELFLOAD_H
#define ELFLOAD_H

#include <sys/types.h>

#include "elfload_elf.h"

#define HOSTLIB_NOT  0
#define HOSTLIB_HOST 1
#define HOSTLIB_DL   2

/* Basic structure for ELF files mid-load */
struct ELF_File {
    char *nm;

    /* if this is actually a host library, this is set to 1 */
    char hostlib;

    /* the complete program, in memory */
    void *prog;
    size_t proglen;

    /* same pointer, actually */
    Elf32_Ehdr *ehdr;

    /* the size in memory of this file */
    ssize_t memsz;

    /* the minimum and maximum position of the loaded file, ideally */
    void *min, *max;

    /* the actual location where this file was loaded */
    void *loc;

    /* the offset of this file's real loaded location from its internal location */
    ssize_t offset;

    /* the dynamic entries table */
    Elf32_Dyn *dynamic;

    /* the string table */
    char *strtab;

    /* and symbol table */
    Elf32_Sym *symtab;

    /* with its associated hash table */
    Elf32_Word *hashtab;
#define ELFFILE_NBUCKET(f) ((f)->hashtab[0])
#define ELFFILE_NCHAIN(f) ((f)->hashtab[1])
#define ELFFILE_BUCKET(f, i) ((f)->hashtab[(i) + 2])
#define ELFFILE_CHAIN(f, i) ((f)->hashtab[(i) + ELFFILE_NBUCKET(f) + 2])

    /* relocation table(s) */
    Elf32_Rel *rel;
    size_t relsz;
    Elf32_Rela *rela;
    size_t relasz;
    void *jmprel;
    size_t jmprelsz;
};

struct ELF_File *loadELF(const char *nm);
void initELF(struct ELF_File *except);
void readFile(const char *nm, struct ELF_File *ef);
void closeFile(struct ELF_File *ef);
void *findELFSymbol(const char *nm, struct ELF_File *onlyin, int localin, int notin,
                    Elf32_Sym **syminto);
Elf32_Word elf_hash(const unsigned char *name);

#endif
