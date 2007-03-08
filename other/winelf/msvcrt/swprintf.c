#include "msvcrt.h"
void _elfimplib_swprintf() asm("swprintf");
void *_imp__swprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_swprintf() {
load_dll_msvcrt();
_imp__swprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "swprintf");
}
void _elfimplib_swprintf() {
asm("leave\njmp *%0" : : "r"(_imp__swprintf));
}

