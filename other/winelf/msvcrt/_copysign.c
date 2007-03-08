#include "msvcrt.h"
void _elfimplib__copysign() asm("copysign");
void *_imp___copysign = NULL;
__attribute__((constructor)) void _elfimplib_init__copysign() {
load_dll_msvcrt();
_imp___copysign = (void *) _elf_GetProcAddress(_dll_msvcrt, "_copysign");
}
void _elfimplib__copysign() {
asm("leave\njmp *%0" : : "r"(_imp___copysign));
}

