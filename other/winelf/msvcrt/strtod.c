#include "msvcrt.h"
void _elfimplib_strtod() asm("strtod");
void *_imp__strtod = NULL;
__attribute__((constructor)) void _elfimplib_init_strtod() {
load_dll_msvcrt();
_imp__strtod = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtod");
}
void _elfimplib_strtod() {
asm("leave\njmp *%0" : : "r"(_imp__strtod));
}

