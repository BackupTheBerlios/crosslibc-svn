#include "msvcrt.h"
void _elfimplib_sqrt() asm("sqrt");
void *_imp__sqrt = NULL;
__attribute__((constructor)) void _elfimplib_init_sqrt() {
load_dll_msvcrt();
_imp__sqrt = (void *) _elf_GetProcAddress(_dll_msvcrt, "sqrt");
}
void _elfimplib_sqrt() {
asm("leave\njmp *%0" : : "r"(_imp__sqrt));
}

