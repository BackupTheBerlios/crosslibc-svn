#include "msvcrt.h"
void _elfimplib__cexit() asm("cexit");
void *_imp___cexit = NULL;
__attribute__((constructor)) void _elfimplib_init__cexit() {
load_dll_msvcrt();
_imp___cexit = (void *) _elf_GetProcAddress(_dll_msvcrt, "_cexit");
}
void _elfimplib__cexit() {
asm("leave\njmp *%0" : : "r"(_imp___cexit));
}

