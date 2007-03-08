#include "msvcrt.h"
void _elfimplib__CIlog() asm("CIlog");
void *_imp___CIlog = NULL;
__attribute__((constructor)) void _elfimplib_init__CIlog() {
load_dll_msvcrt();
_imp___CIlog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIlog");
}
void _elfimplib__CIlog() {
asm("leave\njmp *%0" : : "r"(_imp___CIlog));
}

