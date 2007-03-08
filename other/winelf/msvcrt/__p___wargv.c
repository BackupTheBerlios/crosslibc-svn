#include "msvcrt.h"
void _elfimplib___p___wargv() asm("_p___wargv");
void *_imp____p___wargv = NULL;
__attribute__((constructor)) void _elfimplib_init___p___wargv() {
load_dll_msvcrt();
_imp____p___wargv = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___wargv");
}
void _elfimplib___p___wargv() {
asm("leave\njmp *%0" : : "r"(_imp____p___wargv));
}

