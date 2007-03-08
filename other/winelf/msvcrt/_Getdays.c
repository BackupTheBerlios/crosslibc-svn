#include "msvcrt.h"
void _elfimplib__Getdays() asm("Getdays");
void *_imp___Getdays = NULL;
__attribute__((constructor)) void _elfimplib_init__Getdays() {
load_dll_msvcrt();
_imp___Getdays = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getdays");
}
void _elfimplib__Getdays() {
asm("leave\njmp *%0" : : "r"(_imp___Getdays));
}

