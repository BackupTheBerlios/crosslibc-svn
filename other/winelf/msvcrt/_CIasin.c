#include "msvcrt.h"
void _elfimplib__CIasin() asm("CIasin");
void *_imp___CIasin = NULL;
__attribute__((constructor)) void _elfimplib_init__CIasin() {
load_dll_msvcrt();
_imp___CIasin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIasin");
}
void _elfimplib__CIasin() {
asm("leave\njmp *%0" : : "r"(_imp___CIasin));
}

void _elfimplibmang__CIasin() asm("_CIasin");
void _elfimplibmang__CIasin() {
asm("leave\njmp *%0" : : "r"(_imp___CIasin));
}

