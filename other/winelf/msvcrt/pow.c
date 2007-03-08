#include "msvcrt.h"
void _elfimplib_pow() asm("pow");
void *_imp__pow = NULL;
__attribute__((constructor)) void _elfimplib_init_pow() {
load_dll_msvcrt();
_imp__pow = (void *) _elf_GetProcAddress(_dll_msvcrt, "pow");
}
void _elfimplib_pow() {
asm("leave\njmp *%0" : : "r"(_imp__pow));
}

