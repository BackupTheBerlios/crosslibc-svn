#include "msvcrt.h"
void _elfimplib___isascii() asm("_isascii");
void *_imp____isascii = NULL;
__attribute__((constructor)) void _elfimplib_init___isascii() {
load_dll_msvcrt();
_imp____isascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__isascii");
}
void _elfimplib___isascii() {
asm("leave\njmp *%0" : : "r"(_imp____isascii));
}

