#include "msvcrt.h"
void _elfimplib__fullpath() asm("fullpath");
void *_imp___fullpath = NULL;
__attribute__((constructor)) void _elfimplib_init__fullpath() {
load_dll_msvcrt();
_imp___fullpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_fullpath");
}
void _elfimplib__fullpath() {
asm("leave\njmp *%0" : : "r"(_imp___fullpath));
}

