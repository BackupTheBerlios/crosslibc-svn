#include "msvcrt.h"
void _elfimplib__setjmp3() asm("setjmp3");
void *_imp___setjmp3 = NULL;
__attribute__((constructor)) void _elfimplib_init__setjmp3() {
load_dll_msvcrt();
_imp___setjmp3 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setjmp3");
}
void _elfimplib__setjmp3() {
asm("leave\njmp *%0" : : "r"(_imp___setjmp3));
}

void _elfimplibmang__setjmp3() asm("_setjmp3");
void _elfimplibmang__setjmp3() {
asm("leave\njmp *%0" : : "r"(_imp___setjmp3));
}

