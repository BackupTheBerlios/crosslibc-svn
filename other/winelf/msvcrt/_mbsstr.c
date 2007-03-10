#include "msvcrt.h"
void _elfimplib__mbsstr() asm("mbsstr");
void *_imp___mbsstr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsstr() {
load_dll_msvcrt();
_imp___mbsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsstr");
}
void _elfimplib__mbsstr() {
asm("leave\njmp *%0" : : "r"(_imp___mbsstr));
}

void _elfimplibmang__mbsstr() asm("_mbsstr");
void _elfimplibmang__mbsstr() {
asm("leave\njmp *%0" : : "r"(_imp___mbsstr));
}

