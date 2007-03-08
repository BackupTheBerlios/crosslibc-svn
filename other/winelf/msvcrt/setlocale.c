#include "msvcrt.h"
void _elfimplib_setlocale() asm("setlocale");
void *_imp__setlocale = NULL;
__attribute__((constructor)) void _elfimplib_init_setlocale() {
load_dll_msvcrt();
_imp__setlocale = (void *) _elf_GetProcAddress(_dll_msvcrt, "setlocale");
}
void _elfimplib_setlocale() {
asm("leave\njmp *%0" : : "r"(_imp__setlocale));
}

