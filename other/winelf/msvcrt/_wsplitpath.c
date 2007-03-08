#include "msvcrt.h"
void _elfimplib__wsplitpath() asm("wsplitpath");
void *_imp___wsplitpath = NULL;
__attribute__((constructor)) void _elfimplib_init__wsplitpath() {
load_dll_msvcrt();
_imp___wsplitpath = (void *) _elf_GetProcAddress(_dll_msvcrt, "_wsplitpath");
}
void _elfimplib__wsplitpath() {
asm("leave\njmp *%0" : : "r"(_imp___wsplitpath));
}

