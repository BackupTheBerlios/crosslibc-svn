#include "msvcrt.h"
void _elfimplib___p___initenv() asm("_p___initenv");
void *_imp____p___initenv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___initenv() {
load_dll_msvcrt();
_imp____p___initenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___initenv");
}
void _elfimplib___p___initenv() {
asm("leave\njmp *%0" : : "r"(_imp____p___initenv));
}

