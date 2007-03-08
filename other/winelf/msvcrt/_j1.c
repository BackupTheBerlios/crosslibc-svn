#include "msvcrt.h"
void _elfimplib__j1() asm("j1");
void *_imp___j1 = NULL;
__attribute__((constructor)) void _elfimplib_init__j1() {
load_dll_msvcrt();
_imp___j1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j1");
}
void _elfimplib__j1() {
asm("leave\njmp *%0" : : "r"(_imp___j1));
}

