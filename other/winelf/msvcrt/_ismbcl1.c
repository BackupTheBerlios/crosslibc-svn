#include "msvcrt.h"
void _elfimplib__ismbcl1() asm("ismbcl1");
void *_imp___ismbcl1 = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcl1() {
load_dll_msvcrt();
_imp___ismbcl1 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl1");
}
void _elfimplib__ismbcl1() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcl1));
}

