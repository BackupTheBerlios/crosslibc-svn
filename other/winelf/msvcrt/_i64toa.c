#include "msvcrt.h"
void _elfimplib__i64toa() asm("i64toa");
void *_imp___i64toa = NULL;
__attribute__((constructor)) void _elfimplib_init__i64toa() {
load_dll_msvcrt();
_imp___i64toa = (void *) _elf_GetProcAddress(_dll_msvcrt, "_i64toa");
}
void _elfimplib__i64toa() {
asm("leave\njmp *%0" : : "r"(_imp___i64toa));
}

