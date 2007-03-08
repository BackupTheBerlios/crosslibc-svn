#include "msvcrt.h"
void _elfimplib__mbsnbicmp() asm("mbsnbicmp");
void *_imp___mbsnbicmp = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbicmp() {
load_dll_msvcrt();
_imp___mbsnbicmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicmp");
}
void _elfimplib__mbsnbicmp() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbicmp));
}

