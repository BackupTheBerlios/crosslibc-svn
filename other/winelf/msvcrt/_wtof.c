#include "msvcrt.h"
void _elfimplib__wtof() asm("wtof");
void *_imp___wtof = NULL;
__attribute__((constructor)) void _elfimplib_init__wtof() {
load_dll_msvcrt();
_imp___wtof = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtof");
}
void _elfimplib__wtof() {
asm("leave\njmp *%0" : : "r"(_imp___wtof));
}

void _elfimplibmang__wtof() asm("_wtof");
void _elfimplibmang__wtof() {
asm("leave\njmp *%0" : : "r"(_imp___wtof));
}

