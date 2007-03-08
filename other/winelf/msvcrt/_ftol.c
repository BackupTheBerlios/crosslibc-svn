#include "msvcrt.h"
void _elfimplib__ftol() asm("ftol");
void *_imp___ftol = NULL;
__attribute__((constructor)) void _elfimplib_init__ftol() {
load_dll_msvcrt();
_imp___ftol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ftol");
}
void _elfimplib__ftol() {
asm("leave\njmp *%0" : : "r"(_imp___ftol));
}

