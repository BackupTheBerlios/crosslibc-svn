#include "msvcrt.h"
void _elfimplib__Gettnames() asm("Gettnames");
void *_imp___Gettnames = NULL;
__attribute__((constructor)) void _elfimplib_init__Gettnames() {
load_dll_msvcrt();
_imp___Gettnames = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Gettnames");
}
void _elfimplib__Gettnames() {
asm("leave\njmp *%0" : : "r"(_imp___Gettnames));
}

void _elfimplibmang__Gettnames() asm("_Gettnames");
void _elfimplibmang__Gettnames() {
asm("leave\njmp *%0" : : "r"(_imp___Gettnames));
}

