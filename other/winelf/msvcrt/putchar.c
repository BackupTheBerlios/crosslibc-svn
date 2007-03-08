#include "msvcrt.h"
void _elfimplib_putchar() asm("putchar");
void *_imp__putchar = NULL;
__attribute__((constructor)) void _elfimplib_init_putchar() {
load_dll_msvcrt();
_imp__putchar = (void *) _elf_GetProcAddress(_dll_msvcrt, "putchar");
}
void _elfimplib_putchar() {
asm("leave\njmp *%0" : : "r"(_imp__putchar));
}

