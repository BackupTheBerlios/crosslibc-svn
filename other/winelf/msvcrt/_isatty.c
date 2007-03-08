#include "msvcrt.h"
void _elfimplib__isatty() asm("isatty");
void *_imp___isatty = NULL;
__attribute__((constructor)) void _elfimplib_init__isatty() {
load_dll_msvcrt();
_imp___isatty = (void *) _elf_GetProcAddress(_dll_msvcrt, "_isatty");
}
void _elfimplib__isatty() {
asm("leave\njmp *%0" : : "r"(_imp___isatty));
}

