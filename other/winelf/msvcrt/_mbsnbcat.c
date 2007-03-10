#include "msvcrt.h"
void _elfimplib__mbsnbcat() asm("mbsnbcat");
void *_imp___mbsnbcat = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbcat() {
load_dll_msvcrt();
_imp___mbsnbcat = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbcat");
}
void _elfimplib__mbsnbcat() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcat));
}

void _elfimplibmang__mbsnbcat() asm("_mbsnbcat");
void _elfimplibmang__mbsnbcat() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbcat));
}

