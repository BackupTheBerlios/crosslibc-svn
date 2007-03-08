#include "msvcrt.h"
void _elfimplib_wcstod() asm("wcstod");
void *_imp__wcstod = NULL;
__attribute__((constructor)) void _elfimplib_init_wcstod() {
load_dll_msvcrt();
_imp__wcstod = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcstod");
}
void _elfimplib_wcstod() {
asm("leave\njmp *%0" : : "r"(_imp__wcstod));
}

