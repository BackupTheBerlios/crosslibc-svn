#include "msvcrt.h"
void _elfimplib__lrotl() asm("lrotl");
void *_imp___lrotl = NULL;
__attribute__((constructor)) void _elfimplib_init__lrotl() {
load_dll_msvcrt();
_imp___lrotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotl");
}
void _elfimplib__lrotl() {
asm("leave\njmp *%0" : : "r"(_imp___lrotl));
}

