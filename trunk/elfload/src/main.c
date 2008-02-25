#include <stdio.h>
#include <stdlib.h>

#include "elfload.h"
#include "elfload_exec.h"

int main(int argc, char **argv, char **envp)
{
    struct ELF_File *f;
    void **newstack;
    int i, envc;

    if (argc < 2) {
        fprintf(stderr, "Use: elfload <elf file> [arguments]\n");
        return 1;
    }

    /* load them all in */
    f = loadELF(argv[1]);

    for (envc = 0; envp[envc]; envc++);

    /* make its stack */
    newstack = (void**)
        alloca((argc + envc + 3) * sizeof(void*));
    newstack[0] = (void*) argc;
    for (i = 0; i < argc; i++) {
        newstack[i+1] = (void*) argv[i];
    }
    newstack[i+1] = NULL;

    for (i = 0; i < envc; i++) {
        newstack[i+argc+2] = (void*) envp[i];
    }
    newstack[i+argc+2] = NULL;

    /* FIXME: more steps here */
    WITHSTACK_JMP(newstack, f->ehdr->e_entry + f->offset);
}