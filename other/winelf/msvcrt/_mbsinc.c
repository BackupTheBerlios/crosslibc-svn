#include "msvcrt.h"
void _elfimplib__mbsinc() asm("mbsinc");
void *_imp___mbsinc = NULL;
__attribute__((constructor)) void _elfimplib_init__mbsinc() {
load_dll_msvcrt();
_imp___mbsinc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbsinc");
}
void _elfimplib__mbsinc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsinc));
}

void _elfimplibmang__mbsinc() asm("_mbsinc");
void _elfimplibmang__mbsinc() {
asm("leave\njmp *%0" : : "r"(_imp___mbsinc));
}

