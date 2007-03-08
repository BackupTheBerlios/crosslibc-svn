#include "msvcrt.h"
void _elfimplib__ultow() asm("ultow");
void *_imp___ultow = NULL;
__attribute__((constructor)) void _elfimplib_init__ultow() {
load_dll_msvcrt();
_imp___ultow = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultow");
}
void _elfimplib__ultow() {
asm("leave\njmp *%0" : : "r"(_imp___ultow));
}

