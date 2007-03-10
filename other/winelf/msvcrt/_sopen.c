#include "msvcrt.h"
void _elfimplib__sopen() asm("sopen");
void *_imp___sopen = NULL;
__attribute__((constructor)) void _elfimplib_init__sopen() {
load_dll_msvcrt();
_imp___sopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_sopen");
}
void _elfimplib__sopen() {
asm("leave\njmp *%0" : : "r"(_imp___sopen));
}

void _elfimplibmang__sopen() asm("_sopen");
void _elfimplibmang__sopen() {
asm("leave\njmp *%0" : : "r"(_imp___sopen));
}

