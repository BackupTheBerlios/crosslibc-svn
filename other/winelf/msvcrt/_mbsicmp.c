#include "msvcrt.h"
void _elfimplib__mbsicmp() asm("mbsicmp");
void *_imp___mbsicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsicmp() {
load_dll_msvcrt();
_imp___mbsicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicmp");
}
void _elfimplib__mbsicmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsicmp));
}

void _elfimplibmang__mbsicmp() asm("_mbsicmp");
void _elfimplibmang__mbsicmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsicmp));
}

