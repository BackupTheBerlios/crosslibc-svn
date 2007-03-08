#include "msvcrt.h"
void _elfimplib__logb() asm("logb");
void *_imp___logb = NULL;
__attribute__((constructor)) void _elfimplib_init__logb() {
load_dll_msvcrt();
_imp___logb = (void *) _elf_GetProcAddress(_dll_msvcrt, "_logb");
}
void _elfimplib__logb() {
asm("leave\njmp *%0" : : "r"(_imp___logb));
}

