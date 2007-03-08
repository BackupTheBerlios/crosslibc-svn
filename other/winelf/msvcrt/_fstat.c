#include "msvcrt.h"
void _elfimplib__fstat() asm("fstat");
void *_imp___fstat = NULL;
__attribute__((constructor)) void _elfimplib_init__fstat() {
load_dll_msvcrt();
_imp___fstat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fstat");
}
void _elfimplib__fstat() {
asm("leave\njmp *%0" : : "r"(_imp___fstat));
}

