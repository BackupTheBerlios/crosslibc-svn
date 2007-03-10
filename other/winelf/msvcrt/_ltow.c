#include "msvcrt.h"
void _elfimplib__ltow() asm("ltow");
void *_imp___ltow = NULL;
__attribute__((constructor)) void _elfimplib_init__ltow() {
load_dll_msvcrt();
_imp___ltow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltow");
}
void _elfimplib__ltow() {
asm("leave\njmp *%0" : : "r"(_imp___ltow));
}

void _elfimplibmang__ltow() asm("_ltow");
void _elfimplibmang__ltow() {
asm("leave\njmp *%0" : : "r"(_imp___ltow));
}

