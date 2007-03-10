#include "msvcrt.h"
void _elfimplib__mbsncmp() asm("mbsncmp");
void *_imp___mbsncmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncmp() {
load_dll_msvcrt();
_imp___mbsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncmp");
}
void _elfimplib__mbsncmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncmp));
}

void _elfimplibmang__mbsncmp() asm("_mbsncmp");
void _elfimplibmang__mbsncmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncmp));
}

