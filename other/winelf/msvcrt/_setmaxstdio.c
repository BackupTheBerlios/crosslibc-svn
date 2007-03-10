#include "msvcrt.h"
void _elfimplib__setmaxstdio() asm("setmaxstdio");
void *_imp___setmaxstdio = NULL;
__attribute__((constructor)) void _elfimplib_init__setmaxstdio() {
load_dll_msvcrt();
_imp___setmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setmaxstdio");
}
void _elfimplib__setmaxstdio() {
asm("leave\njmp *%0" : : "r"(_imp___setmaxstdio));
}

void _elfimplibmang__setmaxstdio() asm("_setmaxstdio");
void _elfimplibmang__setmaxstdio() {
asm("leave\njmp *%0" : : "r"(_imp___setmaxstdio));
}

