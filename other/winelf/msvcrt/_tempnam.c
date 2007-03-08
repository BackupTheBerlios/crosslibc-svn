#include "msvcrt.h"
void _elfimplib__tempnam() asm("tempnam");
void *_imp___tempnam = NULL;
__attribute__((constructor)) void _elfimplib_init__tempnam() {
load_dll_msvcrt();
_imp___tempnam = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tempnam");
}
void _elfimplib__tempnam() {
asm("leave\njmp *%0" : : "r"(_imp___tempnam));
}

