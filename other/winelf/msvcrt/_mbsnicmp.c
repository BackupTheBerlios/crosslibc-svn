#include "msvcrt.h"
void _elfimplib__mbsnicmp() asm("mbsnicmp");
void *_imp___mbsnicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnicmp() {
load_dll_msvcrt();
_imp___mbsnicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnicmp");
}
void _elfimplib__mbsnicmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnicmp));
}

