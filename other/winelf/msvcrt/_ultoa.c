#include "msvcrt.h"
void _elfimplib__ultoa() asm("ultoa");
void *_imp___ultoa = NULL;
__attribute__((constructor)) void _elfimplib_init__ultoa() {
load_dll_msvcrt();
_imp___ultoa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ultoa");
}
void _elfimplib__ultoa() {
asm("leave\njmp *%0" : : "r"(_imp___ultoa));
}

void _elfimplibmang__ultoa() asm("_ultoa");
void _elfimplibmang__ultoa() {
asm("leave\njmp *%0" : : "r"(_imp___ultoa));
}

