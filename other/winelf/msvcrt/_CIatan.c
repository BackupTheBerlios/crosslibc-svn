#include "msvcrt.h"
void _elfimplib__CIatan() asm("CIatan");
void *_imp___CIatan = NULL;
__attribute__((constructor)) void _elfimplib_init__CIatan() {
load_dll_msvcrt();
_imp___CIatan = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIatan");
}
void _elfimplib__CIatan() {
asm("leave\njmp *%0" : : "r"(_imp___CIatan));
}

