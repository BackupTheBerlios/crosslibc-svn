#include "msvcrt.h"
void _elfimplib__EH_prolog() asm("EH_prolog");
void *_imp___EH_prolog = NULL;
__attribute__((constructor)) void _elfimplib_init__EH_prolog() {
load_dll_msvcrt();
_imp___EH_prolog = (void *) _elf_GetProcAddress(_dll_msvcrt, "_EH_prolog");
}
void _elfimplib__EH_prolog() {
asm("leave\njmp *%0" : : "r"(_imp___EH_prolog));
}

void _elfimplibmang__EH_prolog() asm("_EH_prolog");
void _elfimplibmang__EH_prolog() {
asm("leave\njmp *%0" : : "r"(_imp___EH_prolog));
}

