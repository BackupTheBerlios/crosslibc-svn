#include "msvcrt.h"
void _elfimplib_exp() asm("exp");
void *_imp__exp = NULL;
__attribute__((constructor)) void _elfimplib_init_exp() {
load_dll_msvcrt();
_imp__exp = (void *) _elf_GetProcAddress(_dll_msvcrt, "exp");
}
void _elfimplib_exp() {
asm("leave\njmp *%0" : : "r"(_imp__exp));
}

