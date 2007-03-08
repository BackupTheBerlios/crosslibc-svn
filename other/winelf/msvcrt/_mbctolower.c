#include "msvcrt.h"
void _elfimplib__mbctolower() asm("mbctolower");
void *_imp___mbctolower = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctolower() {
load_dll_msvcrt();
_imp___mbctolower = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctolower");
}
void _elfimplib__mbctolower() {
asm("leave\njmp *%0" : : "r"(_imp___mbctolower));
}

