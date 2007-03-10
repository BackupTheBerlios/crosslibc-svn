#include "msvcrt.h"
void _elfimplib__CIacos() asm("CIacos");
void *_imp___CIacos = NULL;
__attribute__((constructor)) void _elfimplib_init__CIacos() {
load_dll_msvcrt();
_imp___CIacos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIacos");
}
void _elfimplib__CIacos() {
asm("leave\njmp *%0" : : "r"(_imp___CIacos));
}

void _elfimplibmang__CIacos() asm("_CIacos");
void _elfimplibmang__CIacos() {
asm("leave\njmp *%0" : : "r"(_imp___CIacos));
}

