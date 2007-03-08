#include "msvcrt.h"
void _elfimplib_raise() asm("raise");
void *_imp__raise = NULL;
__attribute__((constructor)) void _elfimplib_init_raise() {
load_dll_msvcrt();
_imp__raise = (void *) _elf_GetProcAddress(_dll_msvcrt, "raise");
}
void _elfimplib_raise() {
asm("leave\njmp *%0" : : "r"(_imp__raise));
}

