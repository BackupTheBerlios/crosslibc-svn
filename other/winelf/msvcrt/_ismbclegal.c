#include "msvcrt.h"
void _elfimplib__ismbclegal() asm("ismbclegal");
void *_imp___ismbclegal = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbclegal() {
load_dll_msvcrt();
_imp___ismbclegal = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbclegal");
}
void _elfimplib__ismbclegal() {
asm("leave\njmp *%0" : : "r"(_imp___ismbclegal));
}

void _elfimplibmang__ismbclegal() asm("_ismbclegal");
void _elfimplibmang__ismbclegal() {
asm("leave\njmp *%0" : : "r"(_imp___ismbclegal));
}

