#include "msvcrt.h"
void _elfimplib_vfprintf() asm("vfprintf");
void *_imp__vfprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vfprintf() {
load_dll_msvcrt();
_imp__vfprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vfprintf");
}
void _elfimplib_vfprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vfprintf));
}

