#include "msvcrt.h"
void _elfimplib_atoi() asm("atoi");
void *_imp__atoi = NULL;
__attribute__((constructor)) void _elfimplib_init_atoi() {
load_dll_msvcrt();
_imp__atoi = (void *) _elf_GetProcAddress(_dll_msvcrt, "atoi");
}
void _elfimplib_atoi() {
asm("leave\njmp *%0" : : "r"(_imp__atoi));
}

