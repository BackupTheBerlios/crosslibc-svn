#include "msvcrt.h"
void _elfimplib_vprintf() asm("vprintf");
void *_imp__vprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vprintf() {
load_dll_msvcrt();
_imp__vprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vprintf");
}
void _elfimplib_vprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vprintf));
}

