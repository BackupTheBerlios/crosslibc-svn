#include "msvcrt.h"
void _elfimplib_isprint() asm("isprint");
void *_imp__isprint = NULL;
__attribute__((constructor)) void _elfimplib_init_isprint() {
load_dll_msvcrt();
_imp__isprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "isprint");
}
void _elfimplib_isprint() {
asm("leave\njmp *%0" : : "r"(_imp__isprint));
}

