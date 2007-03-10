#include "msvcrt.h"
void _elfimplib__findfirsti64() asm("findfirsti64");
void *_imp___findfirsti64 = NULL;
__attribute__((constructor)) void _elfimplib_init__findfirsti64() {
load_dll_msvcrt();
_imp___findfirsti64 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirsti64");
}
void _elfimplib__findfirsti64() {
asm("leave\njmp *%0" : : "r"(_imp___findfirsti64));
}

void _elfimplibmang__findfirsti64() asm("_findfirsti64");
void _elfimplibmang__findfirsti64() {
asm("leave\njmp *%0" : : "r"(_imp___findfirsti64));
}

