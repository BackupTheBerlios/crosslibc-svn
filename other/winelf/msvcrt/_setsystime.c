#include "msvcrt.h"
void _elfimplib__setsystime() asm("setsystime");
void *_imp___setsystime = NULL;
__attribute__((constructor)) void _elfimplib_init__setsystime() {
load_dll_msvcrt();
_imp___setsystime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_setsystime");
}
void _elfimplib__setsystime() {
asm("leave\njmp *%0" : : "r"(_imp___setsystime));
}

void _elfimplibmang__setsystime() asm("_setsystime");
void _elfimplibmang__setsystime() {
asm("leave\njmp *%0" : : "r"(_imp___setsystime));
}

