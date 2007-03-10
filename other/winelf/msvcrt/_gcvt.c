#include "msvcrt.h"
void _elfimplib__gcvt() asm("gcvt");
void *_imp___gcvt = NULL;
__attribute__((constructor)) void _elfimplib_init__gcvt() {
load_dll_msvcrt();
_imp___gcvt = (void *) _elf_GetProcAddress(_dll_msvcrt, "_gcvt");
}
void _elfimplib__gcvt() {
asm("leave\njmp *%0" : : "r"(_imp___gcvt));
}

void _elfimplibmang__gcvt() asm("_gcvt");
void _elfimplibmang__gcvt() {
asm("leave\njmp *%0" : : "r"(_imp___gcvt));
}

