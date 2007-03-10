#include "msvcrt.h"
void _elfimplib__wsopen() asm("wsopen");
void *_imp___wsopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wsopen() {
load_dll_msvcrt();
_imp___wsopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsopen");
}
void _elfimplib__wsopen() {
asm("leave\njmp *%0" : : "r"(_imp___wsopen));
}

void _elfimplibmang__wsopen() asm("_wsopen");
void _elfimplibmang__wsopen() {
asm("leave\njmp *%0" : : "r"(_imp___wsopen));
}

