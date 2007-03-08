#include "msvcrt.h"
void _elfimplib__findnext64() asm("findnext64");
void *_imp___findnext64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findnext64() {
load_dll_msvcrt();
_imp___findnext64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnext64");
}
void _elfimplib__findnext64() {
asm("leave\njmp *%0" : : "r"(_imp___findnext64));
}

