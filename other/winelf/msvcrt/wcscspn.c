#include "msvcrt.h"
void _elfimplib_wcscspn() asm("wcscspn");
void *_imp__wcscspn = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscspn() {
load_dll_msvcrt();
_imp__wcscspn = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscspn");
}
void _elfimplib_wcscspn() {
asm("leave\njmp *%0" : : "r"(_imp__wcscspn));
}

