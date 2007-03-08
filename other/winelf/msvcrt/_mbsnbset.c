#include "msvcrt.h"
void _elfimplib__mbsnbset() asm("mbsnbset");
void *_imp___mbsnbset = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbset() {
load_dll_msvcrt();
_imp___mbsnbset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbset");
}
void _elfimplib__mbsnbset() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbset));
}

