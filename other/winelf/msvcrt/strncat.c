#include "msvcrt.h"
void _elfimplib_strncat() asm("strncat");
void *_imp__strncat = NULL;
__attribute__((constructor)) void _elfimplib_init_strncat() {
load_dll_msvcrt();
_imp__strncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "strncat");
}
void _elfimplib_strncat() {
asm("leave\njmp *%0" : : "r"(_imp__strncat));
}

