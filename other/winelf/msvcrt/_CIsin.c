#include "msvcrt.h"
void _elfimplib__CIsin() asm("CIsin");
void *_imp___CIsin = NULL;
__attribute__((constructor)) void _elfimplib_init__CIsin() {
load_dll_msvcrt();
_imp___CIsin = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsin");
}
void _elfimplib__CIsin() {
asm("leave\njmp *%0" : : "r"(_imp___CIsin));
}

void _elfimplibmang__CIsin() asm("_CIsin");
void _elfimplibmang__CIsin() {
asm("leave\njmp *%0" : : "r"(_imp___CIsin));
}

