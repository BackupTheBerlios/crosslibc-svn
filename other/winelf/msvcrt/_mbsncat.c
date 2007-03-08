#include "msvcrt.h"
void _elfimplib__mbsncat() asm("mbsncat");
void *_imp___mbsncat = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsncat() {
load_dll_msvcrt();
_imp___mbsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsncat");
}
void _elfimplib__mbsncat() {
asm("leave\njmp *%0" : : "r"(_imp___mbsncat));
}

