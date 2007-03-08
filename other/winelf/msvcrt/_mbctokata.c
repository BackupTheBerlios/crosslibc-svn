#include "msvcrt.h"
void _elfimplib__mbctokata() asm("mbctokata");
void *_imp___mbctokata = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctokata() {
load_dll_msvcrt();
_imp___mbctokata = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctokata");
}
void _elfimplib__mbctokata() {
asm("leave\njmp *%0" : : "r"(_imp___mbctokata));
}

