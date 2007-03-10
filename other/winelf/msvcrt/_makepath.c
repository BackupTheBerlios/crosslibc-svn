#include "msvcrt.h"
void _elfimplib__makepath() asm("makepath");
void *_imp___makepath = NULL;
__attribute__((constructor)) void _elfimplib_init__makepath() {
load_dll_msvcrt();
_imp___makepath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_makepath");
}
void _elfimplib__makepath() {
asm("leave\njmp *%0" : : "r"(_imp___makepath));
}

void _elfimplibmang__makepath() asm("_makepath");
void _elfimplibmang__makepath() {
asm("leave\njmp *%0" : : "r"(_imp___makepath));
}

