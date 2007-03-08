#include "msvcrt.h"
void _elfimplib_puts() asm("puts");
void *_imp__puts = NULL;
__attribute__((constructor)) void _elfimplib_init_puts() {
load_dll_msvcrt();
_imp__puts = (void *) _elf_GetProcAddress(_dll_msvcrt, "puts");
}
void _elfimplib_puts() {
asm("leave\njmp *%0" : : "r"(_imp__puts));
}

