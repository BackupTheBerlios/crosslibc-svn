#include "msvcrt.h"
void _elfimplib__wchdir() asm("wchdir");
void *_imp___wchdir = NULL;
__attribute__((constructor)) void _elfimplib_init__wchdir() {
load_dll_msvcrt();
_imp___wchdir = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wchdir");
}
void _elfimplib__wchdir() {
asm("leave\njmp *%0" : : "r"(_imp___wchdir));
}

