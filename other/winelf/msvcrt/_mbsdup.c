#include "msvcrt.h"
void _elfimplib__mbsdup() asm("mbsdup");
void *_imp___mbsdup = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsdup() {
load_dll_msvcrt();
_imp___mbsdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsdup");
}
void _elfimplib__mbsdup() {
asm("leave\njmp *%0" : : "r"(_imp___mbsdup));
}

void _elfimplibmang__mbsdup() asm("_mbsdup");
void _elfimplibmang__mbsdup() {
asm("leave\njmp *%0" : : "r"(_imp___mbsdup));
}

