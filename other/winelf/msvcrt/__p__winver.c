#include "msvcrt.h"
void _elfimplib___p__winver() asm("_p__winver");
void *_imp____p__winver = NULL;
__attribute__((constructor)) void _elfimplib_init___p__winver() {
load_dll_msvcrt();
_imp____p__winver = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p__winver");
}
void _elfimplib___p__winver() {
asm("leave\njmp *%0" : : "r"(_imp____p__winver));
}

void _elfimplibmang___p__winver() asm("__p__winver");
void _elfimplibmang___p__winver() {
asm("leave\njmp *%0" : : "r"(_imp____p__winver));
}

