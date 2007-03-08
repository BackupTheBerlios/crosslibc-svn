#include "msvcrt.h"
void _elfimplib__mbsnset() asm("mbsnset");
void *_imp___mbsnset = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnset() {
load_dll_msvcrt();
_imp___mbsnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnset");
}
void _elfimplib__mbsnset() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnset));
}

