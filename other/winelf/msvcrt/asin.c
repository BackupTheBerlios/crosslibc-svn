#include "msvcrt.h"
void _elfimplib_asin() asm("asin");
void *_imp__asin = NULL;
__attribute__((constructor)) void _elfimplib_init_asin() {
load_dll_msvcrt();
_imp__asin = (void *) _elf_GetProcAddress(_dll_msvcrt, "asin");
}
void _elfimplib_asin() {
asm("leave\njmp *%0" : : "r"(_imp__asin));
}

