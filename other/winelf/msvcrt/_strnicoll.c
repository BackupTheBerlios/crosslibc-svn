#include "msvcrt.h"
void _elfimplib__strnicoll() asm("strnicoll");
void *_imp___strnicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__strnicoll() {
load_dll_msvcrt();
_imp___strnicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicoll");
}
void _elfimplib__strnicoll() {
asm("leave\njmp *%0" : : "r"(_imp___strnicoll));
}

