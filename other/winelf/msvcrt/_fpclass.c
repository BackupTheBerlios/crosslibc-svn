#include "msvcrt.h"
void _elfimplib__fpclass() asm("fpclass");
void *_imp___fpclass = NULL;
__attribute__((constructor)) void _elfimplib_init__fpclass() {
load_dll_msvcrt();
_imp___fpclass = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fpclass");
}
void _elfimplib__fpclass() {
asm("leave\njmp *%0" : : "r"(_imp___fpclass));
}

