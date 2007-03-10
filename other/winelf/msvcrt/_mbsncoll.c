#include "msvcrt.h"
void _elfimplib__mbsncoll() asm("mbsncoll");
void *_imp___mbsncoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncoll() {
load_dll_msvcrt();
_imp___mbsncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncoll");
}
void _elfimplib__mbsncoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncoll));
}

void _elfimplibmang__mbsncoll() asm("_mbsncoll");
void _elfimplibmang__mbsncoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncoll));
}

