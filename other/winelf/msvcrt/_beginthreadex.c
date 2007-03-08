#include "msvcrt.h"
void _elfimplib__beginthreadex() asm("beginthreadex");
void *_imp___beginthreadex = NULL;
__attribute__((constructor)) void _elfimplib_init__beginthreadex() {
load_dll_msvcrt();
_imp___beginthreadex = (void *) _elf_GetProcAddress(_dll_msvcrt, "_beginthreadex");
}
void _elfimplib__beginthreadex() {
asm("leave\njmp *%0" : : "r"(_imp___beginthreadex));
}

