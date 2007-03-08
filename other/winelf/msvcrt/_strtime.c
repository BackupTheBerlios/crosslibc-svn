#include "msvcrt.h"
void _elfimplib__strtime() asm("strtime");
void *_imp___strtime = NULL;
__attribute__((constructor)) void _elfimplib_init__strtime() {
load_dll_msvcrt();
_imp___strtime = (void *) _elf_GetProcAddress(_dll_msvcrt, "_strtime");
}
void _elfimplib__strtime() {
asm("leave\njmp *%0" : : "r"(_imp___strtime));
}

