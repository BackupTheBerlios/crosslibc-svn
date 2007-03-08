#include "msvcrt.h"
void _elfimplib__wpopen() asm("wpopen");
void *_imp___wpopen = NULL;
__attribute__((constructor)) void _elfimplib_init__wpopen() {
load_dll_msvcrt();
_imp___wpopen = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wpopen");
}
void _elfimplib__wpopen() {
asm("leave\njmp *%0" : : "r"(_imp___wpopen));
}

