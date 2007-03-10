#include "msvcrt.h"
void _elfimplib__getmaxstdio() asm("getmaxstdio");
void *_imp___getmaxstdio = NULL;
__attribute__((constructor)) void _elfimplib_init__getmaxstdio() {
load_dll_msvcrt();
_imp___getmaxstdio = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getmaxstdio");
}
void _elfimplib__getmaxstdio() {
asm("leave\njmp *%0" : : "r"(_imp___getmaxstdio));
}

void _elfimplibmang__getmaxstdio() asm("_getmaxstdio");
void _elfimplibmang__getmaxstdio() {
asm("leave\njmp *%0" : : "r"(_imp___getmaxstdio));
}

