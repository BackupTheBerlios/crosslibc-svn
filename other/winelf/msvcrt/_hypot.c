#include "msvcrt.h"
void _elfimplib__hypot() asm("hypot");
void *_imp___hypot = NULL;
__attribute__((constructor)) void _elfimplib_init__hypot() {
load_dll_msvcrt();
_imp___hypot = (void *) _elf_GetProcAddress(_dll_msvcrt, "_hypot");
}
void _elfimplib__hypot() {
asm("leave\njmp *%0" : : "r"(_imp___hypot));
}

void _elfimplibmang__hypot() asm("_hypot");
void _elfimplibmang__hypot() {
asm("leave\njmp *%0" : : "r"(_imp___hypot));
}

