#include "msvcrt.h"
void _elfimplib__mbscoll() asm("mbscoll");
void *_imp___mbscoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscoll() {
load_dll_msvcrt();
_imp___mbscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscoll");
}
void _elfimplib__mbscoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbscoll));
}

