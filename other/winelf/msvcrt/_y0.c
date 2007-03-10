#include "msvcrt.h"
void _elfimplib__y0() asm("y0");
void *_imp___y0 = NULL;
__attribute__((constructor)) void _elfimplib_init__y0() {
load_dll_msvcrt();
_imp___y0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y0");
}
void _elfimplib__y0() {
asm("leave\njmp *%0" : : "r"(_imp___y0));
}

void _elfimplibmang__y0() asm("_y0");
void _elfimplibmang__y0() {
asm("leave\njmp *%0" : : "r"(_imp___y0));
}

