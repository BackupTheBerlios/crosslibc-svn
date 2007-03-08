#include "msvcrt.h"
void _elfimplib__unlink() asm("unlink");
void *_imp___unlink = NULL;
__attribute__((constructor)) void _elfimplib_init__unlink() {
load_dll_msvcrt();
_imp___unlink = (void *) _elf_GetProcAddress(_dll_msvcrt, "_unlink");
}
void _elfimplib__unlink() {
asm("leave\njmp *%0" : : "r"(_imp___unlink));
}

