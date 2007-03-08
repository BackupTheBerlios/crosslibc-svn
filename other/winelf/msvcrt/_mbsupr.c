#include "msvcrt.h"
void _elfimplib__mbsupr() asm("mbsupr");
void *_imp___mbsupr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsupr() {
load_dll_msvcrt();
_imp___mbsupr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsupr");
}
void _elfimplib__mbsupr() {
asm("leave\njmp *%0" : : "r"(_imp___mbsupr));
}

