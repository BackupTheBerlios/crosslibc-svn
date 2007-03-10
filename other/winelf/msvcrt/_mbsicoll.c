#include "msvcrt.h"
void _elfimplib__mbsicoll() asm("mbsicoll");
void *_imp___mbsicoll = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsicoll() {
load_dll_msvcrt();
_imp___mbsicoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsicoll");
}
void _elfimplib__mbsicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsicoll));
}

void _elfimplibmang__mbsicoll() asm("_mbsicoll");
void _elfimplibmang__mbsicoll() {
asm("leave\njmp *%0" : : "r"(_imp___mbsicoll));
}

