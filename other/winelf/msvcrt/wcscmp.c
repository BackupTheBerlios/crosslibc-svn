#include "msvcrt.h"
void _elfimplib_wcscmp() asm("wcscmp");
void *_imp__wcscmp = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscmp() {
load_dll_msvcrt();
_imp__wcscmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscmp");
}
void _elfimplib_wcscmp() {
asm("leave\njmp *%0" : : "r"(_imp__wcscmp));
}

