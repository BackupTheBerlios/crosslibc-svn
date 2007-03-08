#include "msvcrt.h"
void _elfimplib_gets() asm("gets");
void *_imp__gets = NULL;
__attribute__((constructor)) void _elfimplib_init_gets() {
load_dll_msvcrt();
_imp__gets = (void *) _elf_GetProcAddress(_dll_msvcrt, "gets");
}
void _elfimplib_gets() {
asm("leave\njmp *%0" : : "r"(_imp__gets));
}

