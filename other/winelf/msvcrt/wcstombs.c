#include "msvcrt.h"
void _elfimplib_wcstombs() asm("wcstombs");
void *_imp__wcstombs = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstombs() {
load_dll_msvcrt();
_imp__wcstombs = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstombs");
}
void _elfimplib_wcstombs() {
asm("leave\njmp *%0" : : "r"(_imp__wcstombs));
}

