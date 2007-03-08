#include "msvcrt.h"
void _elfimplib_vswprintf() asm("vswprintf");
void *_imp__vswprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vswprintf() {
load_dll_msvcrt();
_imp__vswprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vswprintf");
}
void _elfimplib_vswprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vswprintf));
}

