#include "msvcrt.h"
void _elfimplib__CIcos() asm("CIcos");
void *_imp___CIcos = NULL;
__attribute__((constructor)) void _elfimplib_init__CIcos() {
load_dll_msvcrt();
_imp___CIcos = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIcos");
}
void _elfimplib__CIcos() {
asm("leave\njmp *%0" : : "r"(_imp___CIcos));
}

