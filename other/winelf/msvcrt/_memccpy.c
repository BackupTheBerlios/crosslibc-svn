#include "msvcrt.h"
void _elfimplib__memccpy() asm("memccpy");
void *_imp___memccpy = NULL;
__attribute__((constructor)) void _elfimplib_init__memccpy() {
load_dll_msvcrt();
_imp___memccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_memccpy");
}
void _elfimplib__memccpy() {
asm("leave\njmp *%0" : : "r"(_imp___memccpy));
}

