#include "msvcrt.h"
void _elfimplib__fcvt() asm("fcvt");
void *_imp___fcvt = NULL;
__attribute__((constructor)) void _elfimplib_init__fcvt() {
load_dll_msvcrt();
_imp___fcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fcvt");
}
void _elfimplib__fcvt() {
asm("leave\njmp *%0" : : "r"(_imp___fcvt));
}

