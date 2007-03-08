#include "msvcrt.h"
void _elfimplib__wspawnve() asm("wspawnve");
void *_imp___wspawnve = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnve() {
load_dll_msvcrt();
_imp___wspawnve = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnve");
}
void _elfimplib__wspawnve() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnve));
}

