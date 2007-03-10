#include "msvcrt.h"
void _elfimplib__adjust_fdiv() asm("adjust_fdiv");
void *_imp___adjust_fdiv = NULL;
__attribute__((constructor)) void _elfimplib_init__adjust_fdiv() {
load_dll_msvcrt();
_imp___adjust_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_adjust_fdiv");
}
void _elfimplib__adjust_fdiv() {
asm("leave\njmp *%0" : : "r"(_imp___adjust_fdiv));
}

void _elfimplibmang__adjust_fdiv() asm("_adjust_fdiv");
void _elfimplibmang__adjust_fdiv() {
asm("leave\njmp *%0" : : "r"(_imp___adjust_fdiv));
}

