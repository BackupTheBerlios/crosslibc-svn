#include "msvcrt.h"
void _elfimplib_cosh() asm("cosh");
void *_imp__cosh = NULL;
__attribute__((constructor)) void _elfimplib_init_cosh() {
load_dll_msvcrt();
_imp__cosh = (void *) _elf_GetProcAddress(_dll_msvcrt, "cosh");
}
void _elfimplib_cosh() {
asm("leave\njmp *%0" : : "r"(_imp__cosh));
}

