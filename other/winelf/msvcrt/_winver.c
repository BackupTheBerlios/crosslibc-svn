#include "msvcrt.h"
void _elfimplib__winver() asm("winver");
void *_imp___winver = NULL;
__attribute__((constructor)) void _elfimplib_init__winver() {
load_dll_msvcrt();
_imp___winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_winver");
}
void _elfimplib__winver() {
asm("leave\njmp *%0" : : "r"(_imp___winver));
}

