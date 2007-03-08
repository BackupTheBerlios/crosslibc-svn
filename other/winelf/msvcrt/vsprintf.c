#include "msvcrt.h"
void _elfimplib_vsprintf() asm("vsprintf");
void *_imp__vsprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_vsprintf() {
load_dll_msvcrt();
_imp__vsprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "vsprintf");
}
void _elfimplib_vsprintf() {
asm("leave\njmp *%0" : : "r"(_imp__vsprintf));
}

