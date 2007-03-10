#include "msvcrt.h"
void _elfimplib__cwait() asm("cwait");
void *_imp___cwait = NULL;
__attribute__((constructor)) void _elfimplib_init__cwait() {
load_dll_msvcrt();
_imp___cwait = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cwait");
}
void _elfimplib__cwait() {
asm("leave\njmp *%0" : : "r"(_imp___cwait));
}

void _elfimplibmang__cwait() asm("_cwait");
void _elfimplibmang__cwait() {
asm("leave\njmp *%0" : : "r"(_imp___cwait));
}

