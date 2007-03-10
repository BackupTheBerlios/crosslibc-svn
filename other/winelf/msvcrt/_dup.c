#include "msvcrt.h"
void _elfimplib__dup() asm("dup");
void *_imp___dup = NULL;
__attribute__((constructor)) void _elfimplib_init__dup() {
load_dll_msvcrt();
_imp___dup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_dup");
}
void _elfimplib__dup() {
asm("leave\njmp *%0" : : "r"(_imp___dup));
}

void _elfimplibmang__dup() asm("_dup");
void _elfimplibmang__dup() {
asm("leave\njmp *%0" : : "r"(_imp___dup));
}

