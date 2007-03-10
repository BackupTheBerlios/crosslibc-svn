#include "msvcrt.h"
void _elfimplib__mbsrev() asm("mbsrev");
void *_imp___mbsrev = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsrev() {
load_dll_msvcrt();
_imp___mbsrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrev");
}
void _elfimplib__mbsrev() {
asm("leave\njmp *%0" : : "r"(_imp___mbsrev));
}

void _elfimplibmang__mbsrev() asm("_mbsrev");
void _elfimplibmang__mbsrev() {
asm("leave\njmp *%0" : : "r"(_imp___mbsrev));
}

