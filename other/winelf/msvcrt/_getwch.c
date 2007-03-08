#include "msvcrt.h"
void _elfimplib__getwch() asm("getwch");
void *_imp___getwch = NULL;
__attribute__((constructor)) void _elfimplib_init__getwch() {
load_dll_msvcrt();
_imp___getwch = (void *) _elf_GetProcAddress(_dll_msvcrt, "_getwch");
}
void _elfimplib__getwch() {
asm("leave\njmp *%0" : : "r"(_imp___getwch));
}

