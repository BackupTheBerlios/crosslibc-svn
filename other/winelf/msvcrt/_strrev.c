#include "msvcrt.h"
void _elfimplib__strrev() asm("strrev");
void *_imp___strrev = NULL;
__attribute__((constructor)) void _elfimplib_init__strrev() {
load_dll_msvcrt();
_imp___strrev = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strrev");
}
void _elfimplib__strrev() {
asm("leave\njmp *%0" : : "r"(_imp___strrev));
}

