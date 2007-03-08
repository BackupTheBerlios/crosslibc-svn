#include "msvcrt.h"
void _elfimplib__umask() asm("umask");
void *_imp___umask = NULL;
__attribute__((constructor)) void _elfimplib_init__umask() {
load_dll_msvcrt();
_imp___umask = (void *) _elf_GetProcAddress(_dll_msvcrt, "_umask");
}
void _elfimplib__umask() {
asm("leave\njmp *%0" : : "r"(_imp___umask));
}

