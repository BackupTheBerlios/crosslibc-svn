#include "msvcrt.h"
void _elfimplib__ismbcl2() asm("ismbcl2");
void *_imp___ismbcl2 = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcl2() {
load_dll_msvcrt();
_imp___ismbcl2 = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcl2");
}
void _elfimplib__ismbcl2() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcl2));
}

void _elfimplibmang__ismbcl2() asm("_ismbcl2");
void _elfimplibmang__ismbcl2() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcl2));
}

