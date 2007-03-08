#include "msvcrt.h"
void _elfimplib__mbsnbcnt() asm("mbsnbcnt");
void *_imp___mbsnbcnt = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcnt() {
load_dll_msvcrt();
_imp___mbsnbcnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcnt");
}
void _elfimplib__mbsnbcnt() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcnt));
}

