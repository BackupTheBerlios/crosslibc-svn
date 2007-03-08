#include "msvcrt.h"
void _elfimplib__mbsnbcpy() asm("mbsnbcpy");
void *_imp___mbsnbcpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcpy() {
load_dll_msvcrt();
_imp___mbsnbcpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcpy");
}
void _elfimplib__mbsnbcpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcpy));
}

