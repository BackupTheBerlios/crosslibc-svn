#include "msvcrt.h"
void _elfimplib__mbsset() asm("mbsset");
void *_imp___mbsset = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsset() {
load_dll_msvcrt();
_imp___mbsset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsset");
}
void _elfimplib__mbsset() {
asm("leave\njmp *%0" : : "r"(_imp___mbsset));
}

