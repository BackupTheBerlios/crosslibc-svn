#include "msvcrt.h"
void _elfimplib__strnicmp() asm("strnicmp");
void *_imp___strnicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__strnicmp() {
load_dll_msvcrt();
_imp___strnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strnicmp");
}
void _elfimplib__strnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___strnicmp));
}

void _elfimplibmang__strnicmp() asm("_strnicmp");
void _elfimplibmang__strnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___strnicmp));
}

