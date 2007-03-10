#include "msvcrt.h"
void _elfimplib___p___argc() asm("_p___argc");
void *_imp____p___argc = NULL;
__attribute__((constructor)) void _elfimplib_init___p___argc() {
load_dll_msvcrt();
_imp____p___argc = (void *) _elf_GetProcAddress(_dll_msvcrt, "__p___argc");
}
void _elfimplib___p___argc() {
asm("leave\njmp *%0" : : "r"(_imp____p___argc));
}

void _elfimplibmang___p___argc() asm("__p___argc");
void _elfimplibmang___p___argc() {
asm("leave\njmp *%0" : : "r"(_imp____p___argc));
}

