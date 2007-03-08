#include "msvcrt.h"
void _elfimplib__strdup() asm("strdup");
void *_imp___strdup = NULL;
__attribute__((constructor)) void _elfimplib_init__strdup() {
load_dll_msvcrt();
_imp___strdup = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strdup");
}
void _elfimplib__strdup() {
asm("leave\njmp *%0" : : "r"(_imp___strdup));
}

