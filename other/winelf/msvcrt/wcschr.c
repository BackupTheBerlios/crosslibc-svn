#include "msvcrt.h"
void _elfimplib_wcschr() asm("wcschr");
void *_imp__wcschr = NULL;
__attribute__((constructor)) void _elfimplib_init_wcschr() {
load_dll_msvcrt();
_imp__wcschr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcschr");
}
void _elfimplib_wcschr() {
asm("leave\njmp *%0" : : "r"(_imp__wcschr));
}

