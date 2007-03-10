#include "msvcrt.h"
void _elfimplib__osver() asm("osver");
void *_imp___osver = NULL;
__attribute__((constructor)) void _elfimplib_init__osver() {
load_dll_msvcrt();
_imp___osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "_osver");
}
void _elfimplib__osver() {
asm("leave\njmp *%0" : : "r"(_imp___osver));
}

void _elfimplibmang__osver() asm("_osver");
void _elfimplibmang__osver() {
asm("leave\njmp *%0" : : "r"(_imp___osver));
}

