#include "msvcrt.h"
void _elfimplib__mktime64() asm("mktime64");
void *_imp___mktime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__mktime64() {
load_dll_msvcrt();
_imp___mktime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktime64");
}
void _elfimplib__mktime64() {
asm("leave\njmp *%0" : : "r"(_imp___mktime64));
}

void _elfimplibmang__mktime64() asm("_mktime64");
void _elfimplibmang__mktime64() {
asm("leave\njmp *%0" : : "r"(_imp___mktime64));
}

