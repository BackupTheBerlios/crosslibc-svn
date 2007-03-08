#include "msvcrt.h"
void _elfimplib__CIlog10() asm("CIlog10");
void *_imp___CIlog10 = NULL;
__attribute__((constructor)) void _elfimplib_init__CIlog10() {
load_dll_msvcrt();
_imp___CIlog10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog10");
}
void _elfimplib__CIlog10() {
asm("leave\njmp *%0" : : "r"(_imp___CIlog10));
}

