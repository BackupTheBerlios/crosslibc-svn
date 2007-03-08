#include "msvcrt.h"
void _elfimplib__ismbstrail() asm("ismbstrail");
void *_imp___ismbstrail = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbstrail() {
load_dll_msvcrt();
_imp___ismbstrail = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbstrail");
}
void _elfimplib__ismbstrail() {
asm("leave\njmp *%0" : : "r"(_imp___ismbstrail));
}

