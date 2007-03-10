#include "msvcrt.h"
void _elfimplib__setmbcp() asm("setmbcp");
void *_imp___setmbcp = NULL;
__attribute__((constructor)) void _elfimplib_init__setmbcp() {
load_dll_msvcrt();
_imp___setmbcp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmbcp");
}
void _elfimplib__setmbcp() {
asm("leave\njmp *%0" : : "r"(_imp___setmbcp));
}

void _elfimplibmang__setmbcp() asm("_setmbcp");
void _elfimplibmang__setmbcp() {
asm("leave\njmp *%0" : : "r"(_imp___setmbcp));
}

