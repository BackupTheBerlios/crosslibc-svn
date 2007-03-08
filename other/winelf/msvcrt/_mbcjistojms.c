#include "msvcrt.h"
void _elfimplib__mbcjistojms() asm("mbcjistojms");
void *_imp___mbcjistojms = NULL;
__attribute__((constructor)) void _elfimplib_init__mbcjistojms() {
load_dll_msvcrt();
_imp___mbcjistojms = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbcjistojms");
}
void _elfimplib__mbcjistojms() {
asm("leave\njmp *%0" : : "r"(_imp___mbcjistojms));
}

