#include "msvcrt.h"
void _elfimplib__chmod() asm("chmod");
void *_imp___chmod = NULL;
__attribute__((constructor)) void _elfimplib_init__chmod() {
load_dll_msvcrt();
_imp___chmod = (void *) _elf_GetProcAddress(_dll_msvcrt, "_chmod");
}
void _elfimplib__chmod() {
asm("leave\njmp *%0" : : "r"(_imp___chmod));
}

