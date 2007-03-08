#include "msvcrt.h"
void _elfimplib__open() asm("open");
void *_imp___open = NULL;
__attribute__((constructor)) void _elfimplib_init__open() {
load_dll_msvcrt();
_imp___open = (void *) _elf_GetProcAddress(_dll_msvcrt, "_open");
}
void _elfimplib__open() {
asm("leave\njmp *%0" : : "r"(_imp___open));
}

