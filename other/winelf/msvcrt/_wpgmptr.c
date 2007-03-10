#include "msvcrt.h"
void _elfimplib__wpgmptr() asm("wpgmptr");
void *_imp___wpgmptr = NULL;
__attribute__((constructor)) void _elfimplib_init__wpgmptr() {
load_dll_msvcrt();
_imp___wpgmptr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpgmptr");
}
void _elfimplib__wpgmptr() {
asm("leave\njmp *%0" : : "r"(_imp___wpgmptr));
}

void _elfimplibmang__wpgmptr() asm("_wpgmptr");
void _elfimplibmang__wpgmptr() {
asm("leave\njmp *%0" : : "r"(_imp___wpgmptr));
}

