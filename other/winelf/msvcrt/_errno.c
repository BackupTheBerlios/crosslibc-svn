#include "msvcrt.h"
void _elfimplib__errno() asm("_errno");
void *_imp___errno = NULL;
__attribute__((constructor)) void _elfimplib_init__errno() {
load_dll_msvcrt();
_imp___errno = (void *) _elf_GetProcAddress(_dll_msvcrt, "_errno");
}
void _elfimplib__errno() {
asm("leave\njmp *%0" : : "r"(_imp___errno));
}

