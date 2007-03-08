#include "msvcrt.h"
void _elfimplib___p__timezone() asm("_p__timezone");
void *_imp____p__timezone = NULL;
__attribute__((constructor)) void _elfimplib_init___p__timezone() {
load_dll_msvcrt();
_imp____p__timezone = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__timezone");
}
void _elfimplib___p__timezone() {
asm("leave\njmp *%0" : : "r"(_imp____p__timezone));
}

