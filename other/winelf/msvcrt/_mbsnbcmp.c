#include "msvcrt.h"
void _elfimplib__mbsnbcmp() asm("mbsnbcmp");
void *_imp___mbsnbcmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcmp() {
load_dll_msvcrt();
_imp___mbsnbcmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcmp");
}
void _elfimplib__mbsnbcmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcmp));
}

void _elfimplibmang__mbsnbcmp() asm("_mbsnbcmp");
void _elfimplibmang__mbsnbcmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcmp));
}

