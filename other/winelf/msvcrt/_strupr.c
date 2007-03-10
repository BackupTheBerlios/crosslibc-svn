#include "msvcrt.h"
void _elfimplib__strupr() asm("strupr");
void *_imp___strupr = NULL;
__attribute__((constructor)) void _elfimplib_init__strupr() {
load_dll_msvcrt();
_imp___strupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strupr");
}
void _elfimplib__strupr() {
asm("leave\njmp *%0" : : "r"(_imp___strupr));
}

void _elfimplibmang__strupr() asm("_strupr");
void _elfimplibmang__strupr() {
asm("leave\njmp *%0" : : "r"(_imp___strupr));
}

