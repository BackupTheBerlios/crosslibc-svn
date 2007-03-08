#include "msvcrt.h"
void _elfimplib__mbctype() asm("mbctype");
void *_imp___mbctype = NULL;
__attribute__((constructor)) void _elfimplib_init__mbctype() {
load_dll_msvcrt();
_imp___mbctype = (void *) _elf_GetProcAddress(_dll_msvcrt, "_mbctype");
}
void _elfimplib__mbctype() {
asm("leave\njmp *%0" : : "r"(_imp___mbctype));
}

