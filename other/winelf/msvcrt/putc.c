#include "msvcrt.h"
void _elfimplib_putc() asm("putc");
void *_imp__putc = NULL;
__attribute__((constructor)) void _elfimplib_init_putc() {
load_dll_msvcrt();
_imp__putc = (void *) _elf_GetProcAddress(_dll_msvcrt, "putc");
}
void _elfimplib_putc() {
asm("leave\njmp *%0" : : "r"(_imp__putc));
}

