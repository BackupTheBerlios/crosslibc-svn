#include "msvcrt.h"
void _elfimplib__mbsnbicoll() asm("mbsnbicoll");
void *_imp___mbsnbicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsnbicoll() {
load_dll_msvcrt();
_imp___mbsnbicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsnbicoll");
}
void _elfimplib__mbsnbicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsnbicoll));
}

