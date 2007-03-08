#include "msvcrt.h"
void _elfimplib_atol() asm("atol");
void *_imp__atol = NULL;
__attribute__((constructor)) void _elfimplib_init_atol() {
load_dll_msvcrt();
_imp__atol = (void *) _elf_GetProcAddress(_dll_msvcrt, "atol");
}
void _elfimplib_atol() {
asm("leave\njmp *%0" : : "r"(_imp__atol));
}

