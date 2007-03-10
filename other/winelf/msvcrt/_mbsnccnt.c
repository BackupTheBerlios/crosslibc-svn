#include "msvcrt.h"
void _elfimplib__mbsnccnt() asm("mbsnccnt");
void *_imp___mbsnccnt = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnccnt() {
load_dll_msvcrt();
_imp___mbsnccnt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnccnt");
}
void _elfimplib__mbsnccnt() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnccnt));
}

void _elfimplibmang__mbsnccnt() asm("_mbsnccnt");
void _elfimplibmang__mbsnccnt() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnccnt));
}

