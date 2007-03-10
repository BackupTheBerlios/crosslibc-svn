#include "msvcrt.h"
void _elfimplib__rotl() asm("rotl");
void *_imp___rotl = NULL;
__attribute__((constructor)) void _elfimplib_init__rotl() {
load_dll_msvcrt();
_imp___rotl = (void *) _elf_GetProcAddress(_dll_msvcrt, "_rotl");
}
void _elfimplib__rotl() {
asm("leave\njmp *%0" : : "r"(_imp___rotl));
}

void _elfimplibmang__rotl() asm("_rotl");
void _elfimplibmang__rotl() {
asm("leave\njmp *%0" : : "r"(_imp___rotl));
}

