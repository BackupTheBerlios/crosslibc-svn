#include "msvcrt.h"
void _elfimplib__mbccpy() asm("mbccpy");
void *_imp___mbccpy = NULL;
__attribute__((constructor)) void _elfimplib_init__mbccpy() {
load_dll_msvcrt();
_imp___mbccpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbccpy");
}
void _elfimplib__mbccpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbccpy));
}

void _elfimplibmang__mbccpy() asm("_mbccpy");
void _elfimplibmang__mbccpy() {
asm("leave\njmp *%0" : : "r"(_imp___mbccpy));
}

