#include "msvcrt.h"
void _elfimplib__findnexti64() asm("findnexti64");
void *_imp___findnexti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findnexti64() {
load_dll_msvcrt();
_imp___findnexti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findnexti64");
}
void _elfimplib__findnexti64() {
asm("leave\njmp *%0" : : "r"(_imp___findnexti64));
}

void _elfimplibmang__findnexti64() asm("_findnexti64");
void _elfimplibmang__findnexti64() {
asm("leave\njmp *%0" : : "r"(_imp___findnexti64));
}

