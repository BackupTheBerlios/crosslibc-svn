#include "msvcrt.h"
void _elfimplib_printf() asm("printf");
void *_imp__printf = NULL;
__attribute__((constructor)) void _elfimplib_init_printf() {
load_dll_msvcrt();
_imp__printf = (void *) _elf_GetProcAddress(_dll_msvcrt, "printf");
}
void _elfimplib_printf() {
asm("leave\njmp *%0" : : "r"(_imp__printf));
}

