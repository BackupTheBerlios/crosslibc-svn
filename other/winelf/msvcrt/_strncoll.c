#include "msvcrt.h"
void _elfimplib__strncoll() asm("strncoll");
void *_imp___strncoll = NULL;
__attribute__((constructor)) void _elfimplib_init__strncoll() {
load_dll_msvcrt();
_imp___strncoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strncoll");
}
void _elfimplib__strncoll() {
asm("leave\njmp *%0" : : "r"(_imp___strncoll));
}

