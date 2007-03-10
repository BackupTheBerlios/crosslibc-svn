#include "msvcrt.h"
void _elfimplib__getw() asm("getw");
void *_imp___getw = NULL;
__attribute__((constructor)) void _elfimplib_init__getw() {
load_dll_msvcrt();
_imp___getw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getw");
}
void _elfimplib__getw() {
asm("leave\njmp *%0" : : "r"(_imp___getw));
}

void _elfimplibmang__getw() asm("_getw");
void _elfimplibmang__getw() {
asm("leave\njmp *%0" : : "r"(_imp___getw));
}

