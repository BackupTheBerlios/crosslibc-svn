#include "msvcrt.h"
void _elfimplib__inpw() asm("inpw");
void *_imp___inpw = NULL;
__attribute__((constructor)) void _elfimplib_init__inpw() {
load_dll_msvcrt();
_imp___inpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_inpw");
}
void _elfimplib__inpw() {
asm("leave\njmp *%0" : : "r"(_imp___inpw));
}

void _elfimplibmang__inpw() asm("_inpw");
void _elfimplibmang__inpw() {
asm("leave\njmp *%0" : : "r"(_imp___inpw));
}

