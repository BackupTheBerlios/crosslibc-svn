#include "msvcrt.h"
void _elfimplib__mbstrlen() asm("mbstrlen");
void *_imp___mbstrlen = NULL;
__attribute__((constructor)) void _elfimplib_init__mbstrlen() {
load_dll_msvcrt();
_imp___mbstrlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstrlen");
}
void _elfimplib__mbstrlen() {
asm("leave\njmp *%0" : : "r"(_imp___mbstrlen));
}

