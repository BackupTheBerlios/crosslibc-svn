#include "msvcrt.h"
void _elfimplib_vwprintf() asm("vwprintf");
void *_imp__vwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vwprintf() {
load_dll_msvcrt();
_imp__vwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vwprintf");
}
void _elfimplib_vwprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vwprintf));
}

