#include "msvcrt.h"
void _elfimplib__snscanf() asm("snscanf");
void *_imp___snscanf = NULL;
__attribute__((constructor)) void _elfimplib_init__snscanf() {
load_dll_msvcrt();
_imp___snscanf = (void *) _elf_GetProcAddress(_dll_msvcrt, "_snscanf");
}
void _elfimplib__snscanf() {
asm("leave\njmp *%0" : : "r"(_imp___snscanf));
}

void _elfimplibmang__snscanf() asm("_snscanf");
void _elfimplibmang__snscanf() {
asm("leave\njmp *%0" : : "r"(_imp___snscanf));
}

