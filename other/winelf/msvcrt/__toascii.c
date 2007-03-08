#include "msvcrt.h"
void _elfimplib___toascii() asm("_toascii");
void *_imp____toascii = NULL;
__attribute__((constructor)) void _elfimplib_init___toascii() {
load_dll_msvcrt();
_imp____toascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "__toascii");
}
void _elfimplib___toascii() {
asm("leave\njmp *%0" : : "r"(_imp____toascii));
}

