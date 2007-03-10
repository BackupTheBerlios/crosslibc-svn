#include "msvcrt.h"
void _elfimplib__outpw() asm("outpw");
void *_imp___outpw = NULL;
__attribute__((constructor)) void _elfimplib_init__outpw() {
load_dll_msvcrt();
_imp___outpw = (void *) _elf_GetProcAddress(_dll_msvcrt, "_outpw");
}
void _elfimplib__outpw() {
asm("leave\njmp *%0" : : "r"(_imp___outpw));
}

void _elfimplibmang__outpw() asm("_outpw");
void _elfimplibmang__outpw() {
asm("leave\njmp *%0" : : "r"(_imp___outpw));
}

