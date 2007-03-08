#include "msvcrt.h"
void _elfimplib_vfwprintf() asm("vfwprintf");
void *_imp__vfwprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vfwprintf() {
load_dll_msvcrt();
_imp__vfwprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfwprintf");
}
void _elfimplib_vfwprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vfwprintf));
}

