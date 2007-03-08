#include "msvcrt.h"
void _elfimplib__strnset() asm("strnset");
void *_imp___strnset = NULL;
__attribute__((constructor)) void _elfimplib_init__strnset() {
load_dll_msvcrt();
_imp___strnset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnset");
}
void _elfimplib__strnset() {
asm("leave\njmp *%0" : : "r"(_imp___strnset));
}

