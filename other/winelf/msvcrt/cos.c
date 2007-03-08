#include "msvcrt.h"
void _elfimplib_cos() asm("cos");
void *_imp__cos = NULL;
__attribute__((constructor)) void _elfimplib_init_cos() {
load_dll_msvcrt();
_imp__cos = (void *) _elf_GetProcAddress(_dll_msvcrt, "cos");
}
void _elfimplib_cos() {
asm("leave\njmp *%0" : : "r"(_imp__cos));
}

