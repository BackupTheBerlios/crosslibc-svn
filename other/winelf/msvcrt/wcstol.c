#include "msvcrt.h"
void _elfimplib_wcstol() asm("wcstol");
void *_imp__wcstol = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstol() {
load_dll_msvcrt();
_imp__wcstol = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstol");
}
void _elfimplib_wcstol() {
asm("leave\njmp *%0" : : "r"(_imp__wcstol));
}

