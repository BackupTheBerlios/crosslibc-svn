#include "msvcrt.h"
void _elfimplib__Getmonths() asm("Getmonths");
void *_imp___Getmonths = NULL;
__attribute__((constructor)) void _elfimplib_init__Getmonths() {
load_dll_msvcrt();
_imp___Getmonths = (void *) _elf_GetProcAddress(_dll_msvcrt, "_Getmonths");
}
void _elfimplib__Getmonths() {
asm("leave\njmp *%0" : : "r"(_imp___Getmonths));
}

void _elfimplibmang__Getmonths() asm("_Getmonths");
void _elfimplibmang__Getmonths() {
asm("leave\njmp *%0" : : "r"(_imp___Getmonths));
}

