#include "msvcrt.h"
void _elfimplib__dup2() asm("dup2");
void *_imp___dup2 = NULL;
__attribute__((constructor)) void _elfimplib_init__dup2() {
load_dll_msvcrt();
_imp___dup2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup2");
}
void _elfimplib__dup2() {
asm("leave\njmp *%0" : : "r"(_imp___dup2));
}

