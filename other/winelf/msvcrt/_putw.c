#include "msvcrt.h"
void _elfimplib__putw() asm("putw");
void *_imp___putw = NULL;
__attribute__((constructor)) void _elfimplib_init__putw() {
load_dll_msvcrt();
_imp___putw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_putw");
}
void _elfimplib__putw() {
asm("leave\njmp *%0" : : "r"(_imp___putw));
}

void _elfimplibmang__putw() asm("_putw");
void _elfimplibmang__putw() {
asm("leave\njmp *%0" : : "r"(_imp___putw));
}

