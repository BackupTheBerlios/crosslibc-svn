#include "msvcrt.h"
void _elfimplib_div() asm("div");
void *_imp__div = NULL;
__attribute__((constructor)) void _elfimplib_init_div() {
load_dll_msvcrt();
_imp__div = (void *) _elf_GetProcAddress(_dll_msvcrt, "div");
}
void _elfimplib_div() {
asm("leave\njmp *%0" : : "r"(_imp__div));
}

