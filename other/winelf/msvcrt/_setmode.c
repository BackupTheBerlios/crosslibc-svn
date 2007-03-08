#include "msvcrt.h"
void _elfimplib__setmode() asm("setmode");
void *_imp___setmode = NULL;
__attribute__((constructor)) void _elfimplib_init__setmode() {
load_dll_msvcrt();
_imp___setmode = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmode");
}
void _elfimplib__setmode() {
asm("leave\njmp *%0" : : "r"(_imp___setmode));
}

