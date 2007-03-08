#include "msvcrt.h"
void _elfimplib_wcstok() asm("wcstok");
void *_imp__wcstok = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstok() {
load_dll_msvcrt();
_imp__wcstok = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstok");
}
void _elfimplib_wcstok() {
asm("leave\njmp *%0" : : "r"(_imp__wcstok));
}

