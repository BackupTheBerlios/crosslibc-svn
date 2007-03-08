#include "msvcrt.h"
void _elfimplib_modf() asm("modf");
void *_imp__modf = NULL;
__attribute__((constructor)) void _elfimplib_init_modf() {
load_dll_msvcrt();
_imp__modf = (void *) _elf_GetProcAddress(_dll_msvcrt, "modf");
}
void _elfimplib_modf() {
asm("leave\njmp *%0" : : "r"(_imp__modf));
}

