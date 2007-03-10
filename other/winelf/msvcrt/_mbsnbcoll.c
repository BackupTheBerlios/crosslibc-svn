#include "msvcrt.h"
void _elfimplib__mbsnbcoll() asm("mbsnbcoll");
void *_imp___mbsnbcoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcoll() {
load_dll_msvcrt();
_imp___mbsnbcoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcoll");
}
void _elfimplib__mbsnbcoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcoll));
}

void _elfimplibmang__mbsnbcoll() asm("_mbsnbcoll");
void _elfimplibmang__mbsnbcoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcoll));
}

