#include "msvcrt.h"
void _elfimplib__findfirst() asm("findfirst");
void *_imp___findfirst = NULL;
__attribute__((constructor)) void _elfimplib_init__findfirst() {
load_dll_msvcrt();
_imp___findfirst = (void *) _elf_GetProcAddress(_dll_msvcrt, "_findfirst");
}
void _elfimplib__findfirst() {
asm("leave\njmp *%0" : : "r"(_imp___findfirst));
}

void _elfimplibmang__findfirst() asm("_findfirst");
void _elfimplibmang__findfirst() {
asm("leave\njmp *%0" : : "r"(_imp___findfirst));
}

