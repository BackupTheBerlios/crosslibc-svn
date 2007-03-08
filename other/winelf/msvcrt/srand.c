#include "msvcrt.h"
void _elfimplib_srand() asm("srand");
void *_imp__srand = NULL;
__attribute__((constructor)) void _elfimplib_init_srand() {
load_dll_msvcrt();
_imp__srand = (void *) _elf_GetProcAddress(_dll_msvcrt, "srand");
}
void _elfimplib_srand() {
asm("leave\njmp *%0" : : "r"(_imp__srand));
}

