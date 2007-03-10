#include "msvcrt.h"
void _elfimplib__mbscmp() asm("mbscmp");
void *_imp___mbscmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscmp() {
load_dll_msvcrt();
_imp___mbscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscmp");
}
void _elfimplib__mbscmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbscmp));
}

void _elfimplibmang__mbscmp() asm("_mbscmp");
void _elfimplibmang__mbscmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbscmp));
}

