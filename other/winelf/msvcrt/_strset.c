#include "msvcrt.h"
void _elfimplib__strset() asm("strset");
void *_imp___strset = NULL;
__attribute__((constructor)) void _elfimplib_init__strset() {
load_dll_msvcrt();
_imp___strset = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strset");
}
void _elfimplib__strset() {
asm("leave\njmp *%0" : : "r"(_imp___strset));
}

