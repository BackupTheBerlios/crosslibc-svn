#include "msvcrt.h"
void _elfimplib__CIsqrt() asm("CIsqrt");
void *_imp___CIsqrt = NULL;
__attribute__((constructor)) void _elfimplib_init__CIsqrt() {
load_dll_msvcrt();
_imp___CIsqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_CIsqrt");
}
void _elfimplib__CIsqrt() {
asm("leave\njmp *%0" : : "r"(_imp___CIsqrt));
}

