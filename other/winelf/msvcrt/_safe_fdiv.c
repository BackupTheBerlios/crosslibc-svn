#include "msvcrt.h"
void _elfimplib__safe_fdiv() asm("safe_fdiv");
void *_imp___safe_fdiv = NULL;
__attribute__((constructor)) void _elfimplib_init__safe_fdiv() {
load_dll_msvcrt();
_imp___safe_fdiv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_safe_fdiv");
}
void _elfimplib__safe_fdiv() {
asm("leave\njmp *%0" : : "r"(_imp___safe_fdiv));
}

