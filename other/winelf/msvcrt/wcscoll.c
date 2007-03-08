#include "msvcrt.h"
void _elfimplib_wcscoll() asm("wcscoll");
void *_imp__wcscoll = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscoll() {
load_dll_msvcrt();
_imp__wcscoll = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscoll");
}
void _elfimplib_wcscoll() {
asm("leave\njmp *%0" : : "r"(_imp__wcscoll));
}

