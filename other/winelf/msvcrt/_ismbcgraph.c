#include "msvcrt.h"
void _elfimplib__ismbcgraph() asm("ismbcgraph");
void *_imp___ismbcgraph = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcgraph() {
load_dll_msvcrt();
_imp___ismbcgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcgraph");
}
void _elfimplib__ismbcgraph() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcgraph));
}

void _elfimplibmang__ismbcgraph() asm("_ismbcgraph");
void _elfimplibmang__ismbcgraph() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcgraph));
}

