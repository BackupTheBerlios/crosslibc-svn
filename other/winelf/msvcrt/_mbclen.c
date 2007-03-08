#include "msvcrt.h"
void _elfimplib__mbclen() asm("mbclen");
void *_imp___mbclen = NULL;
__attribute__((constructor)) void _elfimplib_init__mbclen() {
load_dll_msvcrt();
_imp___mbclen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbclen");
}
void _elfimplib__mbclen() {
asm("leave\njmp *%0" : : "r"(_imp___mbclen));
}

