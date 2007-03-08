#include "msvcrt.h"
void _elfimplib__wtol() asm("wtol");
void *_imp___wtol = NULL;
__attribute__((constructor)) void _elfimplib_init__wtol() {
load_dll_msvcrt();
_imp___wtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wtol");
}
void _elfimplib__wtol() {
asm("leave\njmp *%0" : : "r"(_imp___wtol));
}

