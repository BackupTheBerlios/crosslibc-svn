#include "msvcrt.h"
void _elfimplib__ismbcl0() asm("ismbcl0");
void *_imp___ismbcl0 = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcl0() {
load_dll_msvcrt();
_imp___ismbcl0 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl0");
}
void _elfimplib__ismbcl0() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcl0));
}

