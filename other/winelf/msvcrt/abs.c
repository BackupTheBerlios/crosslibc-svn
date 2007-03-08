#include "msvcrt.h"
void _elfimplib_abs() asm("abs");
void *_imp__abs = NULL;
__attribute__((constructor)) void _elfimplib_init_abs() {
load_dll_msvcrt();
_imp__abs = (void *) _elf_GetProcAddress(_dll_msvcrt, "abs");
}
void _elfimplib_abs() {
asm("leave\njmp *%0" : : "r"(_imp__abs));
}

