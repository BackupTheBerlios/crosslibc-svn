#include "msvcrt.h"
void _elfimplib___p___winitenv() asm("_p___winitenv");
void *_imp____p___winitenv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___winitenv() {
load_dll_msvcrt();
_imp____p___winitenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___winitenv");
}
void _elfimplib___p___winitenv() {
asm("leave\njmp *%0" : : "r"(_imp____p___winitenv));
}

void _elfimplibmang___p___winitenv() asm("__p___winitenv");
void _elfimplibmang___p___winitenv() {
asm("leave\njmp *%0" : : "r"(_imp____p___winitenv));
}

