#include "msvcrt.h"
void _elfimplib_fwprintf() asm("fwprintf");
void *_imp__fwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_fwprintf() {
load_dll_msvcrt();
_imp__fwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fwprintf");
}
void _elfimplib_fwprintf() {
asm("leave\njmp *%0" : : "r"(_imp__fwprintf));
}

