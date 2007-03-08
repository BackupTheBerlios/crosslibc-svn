#include "msvcrt.h"
void _elfimplib__ismbcsymbol() asm("ismbcsymbol");
void *_imp___ismbcsymbol = NULL;
__attribute__((constructor)) void _elfimplib_init__ismbcsymbol() {
load_dll_msvcrt();
_imp___ismbcsymbol = (void *) _elf_GetProcAddress(_dll_msvcrt, "_ismbcsymbol");
}
void _elfimplib__ismbcsymbol() {
asm("leave\njmp *%0" : : "r"(_imp___ismbcsymbol));
}

