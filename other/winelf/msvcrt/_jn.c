#include "msvcrt.h"
void _elfimplib__jn() asm("jn");
void *_imp___jn = NULL;
__attribute__((constructor)) void _elfimplib_init__jn() {
load_dll_msvcrt();
_imp___jn = (void *) _elf_GetProcAddress(_dll_msvcrt, "_jn");
}
void _elfimplib__jn() {
asm("leave\njmp *%0" : : "r"(_imp___jn));
}

