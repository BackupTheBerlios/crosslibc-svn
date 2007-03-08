#include "msvcrt.h"
void _elfimplib___p__osver() asm("_p__osver");
void *_imp____p__osver = NULL;
__attribute__((constructor)) void _elfimplib_init___p__osver() {
load_dll_msvcrt();
_imp____p__osver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__osver");
}
void _elfimplib___p__osver() {
asm("leave\njmp *%0" : : "r"(_imp____p__osver));
}

