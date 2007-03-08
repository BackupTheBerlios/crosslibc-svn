#include "msvcrt.h"
void _elfimplib__setjmp() asm("setjmp");
void *_imp___setjmp = NULL;
__attribute__((constructor)) void _elfimplib_init__setjmp() {
load_dll_msvcrt();
_imp___setjmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp");
}
void _elfimplib__setjmp() {
asm("leave\njmp *%0" : : "r"(_imp___setjmp));
}

