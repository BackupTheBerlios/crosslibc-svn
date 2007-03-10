#include "msvcrt.h"
void _elfimplib__mbstok() asm("mbstok");
void *_imp___mbstok = NULL;
__attribute__((constructor)) void _elfimplib_init__mbstok() {
load_dll_msvcrt();
_imp___mbstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbstok");
}
void _elfimplib__mbstok() {
asm("leave\njmp *%0" : : "r"(_imp___mbstok));
}

void _elfimplibmang__mbstok() asm("_mbstok");
void _elfimplibmang__mbstok() {
asm("leave\njmp *%0" : : "r"(_imp___mbstok));
}

