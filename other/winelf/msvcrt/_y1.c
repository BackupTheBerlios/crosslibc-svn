#include "msvcrt.h"
void _elfimplib__y1() asm("y1");
void *_imp___y1 = NULL;
__attribute__((constructor)) void _elfimplib_init__y1() {
load_dll_msvcrt();
_imp___y1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_y1");
}
void _elfimplib__y1() {
asm("leave\njmp *%0" : : "r"(_imp___y1));
}

