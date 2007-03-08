#include "msvcrt.h"
void _elfimplib__wgetenv() asm("wgetenv");
void *_imp___wgetenv = NULL;
__attribute__((constructor)) void _elfimplib_init__wgetenv() {
load_dll_msvcrt();
_imp___wgetenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wgetenv");
}
void _elfimplib__wgetenv() {
asm("leave\njmp *%0" : : "r"(_imp___wgetenv));
}

