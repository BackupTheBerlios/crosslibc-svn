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

    /* initialize .so files */
    initELF(f);

    /* make its stack */
    for (envc = 0; envp[envc]; envc++);
    newstack = (void**)
        alloca((argc + envc + 2) * sizeof(void*));
    newstack[0] = (void*) (argc - 1);
    for (i = 1; i < argc; i++) {
        newstack[i] = (void*) argv[i];
    }
    newstack[i] = NULL;

    for (i = 0; i < envc; i++) {
        newstack[i+argc+1] = (void*) envp[i];
    }
    newstack[i+argc+1] = NULL;

    /* and call it */
    WITHSTACK_JMP(newstack, f->ehdr->e_entry + f->offset);
}
