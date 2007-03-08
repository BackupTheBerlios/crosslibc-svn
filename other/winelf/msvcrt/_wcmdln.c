#include "msvcrt.h"
void _elfimplib__wcmdln() asm("wcmdln");
void *_imp___wcmdln = NULL;
__attribute__((constructor)) void _elfimplib_init__wcmdln() {
load_dll_msvcrt();
_imp___wcmdln = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wcmdln");
}
void _elfimplib__wcmdln() {
asm("leave\njmp *%0" : : "r"(_imp___wcmdln));
}

