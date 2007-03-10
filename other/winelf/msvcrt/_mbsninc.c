#include "msvcrt.h"
void _elfimplib__mbsninc() asm("mbsninc");
void *_imp___mbsninc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsninc() {
load_dll_msvcrt();
_imp___mbsninc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsninc");
}
void _elfimplib__mbsninc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsninc));
}

void _elfimplibmang__mbsninc() asm("_mbsninc");
void _elfimplibmang__mbsninc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsninc));
}

