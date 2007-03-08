#include "msvcrt.h"
void _elfimplib_setbuf() asm("setbuf");
void *_imp__setbuf = NULL;
__attribute__((constructor)) void _elfimplib_init_setbuf() {
load_dll_msvcrt();
_imp__setbuf = (void *) _elf_GetProcAddress(_dll_msvcrt, "setbuf");
}
void _elfimplib_setbuf() {
asm("leave\njmp *%0" : : "r"(_imp__setbuf));
}

