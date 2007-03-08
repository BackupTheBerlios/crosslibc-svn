#include "msvcrt.h"
void _elfimplib__lrotr() asm("lrotr");
void *_imp___lrotr = NULL;
__attribute__((constructor)) void _elfimplib_init__lrotr() {
load_dll_msvcrt();
_imp___lrotr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_lrotr");
}
void _elfimplib__lrotr() {
asm("leave\njmp *%0" : : "r"(_imp___lrotr));
}

