#include "msvcrt.h"
void _elfimplib__stati64() asm("stati64");
void *_imp___stati64 = NULL;
__attribute__((constructor)) void _elfimplib_init__stati64() {
load_dll_msvcrt();
_imp___stati64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stati64");
}
void _elfimplib__stati64() {
asm("leave\njmp *%0" : : "r"(_imp___stati64));
}

void _elfimplibmang__stati64() asm("_stati64");
void _elfimplibmang__stati64() {
asm("leave\njmp *%0" : : "r"(_imp___stati64));
}

