#include "msvcrt.h"
void _elfimplib__mbsncpy() asm("mbsncpy");
void *_imp___mbsncpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncpy() {
load_dll_msvcrt();
_imp___mbsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncpy");
}
void _elfimplib__mbsncpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncpy));
}

