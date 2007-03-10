#include "msvcrt.h"
void _elfimplib__mbschr() asm("mbschr");
void *_imp___mbschr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbschr() {
load_dll_msvcrt();
_imp___mbschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbschr");
}
void _elfimplib__mbschr() {
asm("leave\njmp *%0" : : "r"(_imp___mbschr));
}

void _elfimplibmang__mbschr() asm("_mbschr");
void _elfimplibmang__mbschr() {
asm("leave\njmp *%0" : : "r"(_imp___mbschr));
}

