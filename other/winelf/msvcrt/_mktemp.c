#include "msvcrt.h"
void _elfimplib__mktemp() asm("mktemp");
void *_imp___mktemp = NULL;
__attribute__((constructor)) void _elfimplib_init__mktemp() {
load_dll_msvcrt();
_imp___mktemp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mktemp");
}
void _elfimplib__mktemp() {
asm("leave\njmp *%0" : : "r"(_imp___mktemp));
}

void _elfimplibmang__mktemp() asm("_mktemp");
void _elfimplibmang__mktemp() {
asm("leave\njmp *%0" : : "r"(_imp___mktemp));
}

