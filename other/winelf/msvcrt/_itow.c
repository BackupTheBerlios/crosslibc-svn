#include "msvcrt.h"
void _elfimplib__itow() asm("itow");
void *_imp___itow = NULL;
__attribute__((constructor)) void _elfimplib_init__itow() {
load_dll_msvcrt();
_imp___itow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_itow");
}
void _elfimplib__itow() {
asm("leave\njmp *%0" : : "r"(_imp___itow));
}

void _elfimplibmang__itow() asm("_itow");
void _elfimplibmang__itow() {
asm("leave\njmp *%0" : : "r"(_imp___itow));
}

