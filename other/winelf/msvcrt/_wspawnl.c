#include "msvcrt.h"
void _elfimplib__wspawnl() asm("wspawnl");
void *_imp___wspawnl = NULL;
__attribute__((constructor)) void _elfimplib_init__wspawnl() {
load_dll_msvcrt();
_imp___wspawnl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wspawnl");
}
void _elfimplib__wspawnl() {
asm("leave\njmp *%0" : : "r"(_imp___wspawnl));
}

