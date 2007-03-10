#include "msvcrt.h"
void _elfimplib__stat64() asm("stat64");
void *_imp___stat64 = NULL;
__attribute__((constructor)) void _elfimplib_init__stat64() {
load_dll_msvcrt();
_imp___stat64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_stat64");
}
void _elfimplib__stat64() {
asm("leave\njmp *%0" : : "r"(_imp___stat64));
}

void _elfimplibmang__stat64() asm("_stat64");
void _elfimplibmang__stat64() {
asm("leave\njmp *%0" : : "r"(_imp___stat64));
}

