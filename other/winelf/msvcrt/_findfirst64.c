#include "msvcrt.h"
void _elfimplib__findfirst64() asm("findfirst64");
void *_imp___findfirst64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findfirst64() {
load_dll_msvcrt();
_imp___findfirst64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst64");
}
void _elfimplib__findfirst64() {
asm("leave\njmp *%0" : : "r"(_imp___findfirst64));
}

void _elfimplibmang__findfirst64() asm("_findfirst64");
void _elfimplibmang__findfirst64() {
asm("leave\njmp *%0" : : "r"(_imp___findfirst64));
}

