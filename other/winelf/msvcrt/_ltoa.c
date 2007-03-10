#include "msvcrt.h"
void _elfimplib__ltoa() asm("ltoa");
void *_imp___ltoa = NULL;
__attribute__((constructor)) void _elfimplib_init__ltoa() {
load_dll_msvcrt();
_imp___ltoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ltoa");
}
void _elfimplib__ltoa() {
asm("leave\njmp *%0" : : "r"(_imp___ltoa));
}

void _elfimplibmang__ltoa() asm("_ltoa");
void _elfimplibmang__ltoa() {
asm("leave\njmp *%0" : : "r"(_imp___ltoa));
}

