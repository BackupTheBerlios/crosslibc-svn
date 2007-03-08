#include "msvcrt.h"
void _elfimplib__initterm() asm("initterm");
void *_imp___initterm = NULL;
__attribute__((constructor)) void _elfimplib_init__initterm() {
load_dll_msvcrt();
_imp___initterm = (void *) _elf_GetProcAddress(_dll_msvcrt, "_initterm");
}
void _elfimplib__initterm() {
asm("leave\njmp *%0" : : "r"(_imp___initterm));
}

