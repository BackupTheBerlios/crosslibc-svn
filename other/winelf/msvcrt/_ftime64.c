#include "msvcrt.h"
void _elfimplib__ftime64() asm("ftime64");
void *_imp___ftime64 = NULL;
__attribute__((constructor)) void _elfimplib_init__ftime64() {
load_dll_msvcrt();
_imp___ftime64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftime64");
}
void _elfimplib__ftime64() {
asm("leave\njmp *%0" : : "r"(_imp___ftime64));
}

