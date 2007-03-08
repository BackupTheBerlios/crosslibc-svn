#include "msvcrt.h"
void _elfimplib__mbscat() asm("mbscat");
void *_imp___mbscat = NULL;
__attribute__((constructor)) void _elfimplib_init__mbscat() {
load_dll_msvcrt();
_imp___mbscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbscat");
}
void _elfimplib__mbscat() {
asm("leave\njmp *%0" : : "r"(_imp___mbscat));
}

