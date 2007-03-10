#include "msvcrt.h"
void _elfimplib__j0() asm("j0");
void *_imp___j0 = NULL;
__attribute__((constructor)) void _elfimplib_init__j0() {
load_dll_msvcrt();
_imp___j0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_j0");
}
void _elfimplib__j0() {
asm("leave\njmp *%0" : : "r"(_imp___j0));
}

void _elfimplibmang__j0() asm("_j0");
void _elfimplibmang__j0() {
asm("leave\njmp *%0" : : "r"(_imp___j0));
}

