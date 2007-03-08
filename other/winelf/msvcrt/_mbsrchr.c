#include "msvcrt.h"
void _elfimplib__mbsrchr() asm("mbsrchr");
void *_imp___mbsrchr = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsrchr() {
load_dll_msvcrt();
_imp___mbsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsrchr");
}
void _elfimplib__mbsrchr() {
asm("leave\njmp *%0" : : "r"(_imp___mbsrchr));
}

