#include "msvcrt.h"
void _elfimplib_wcscpy() asm("wcscpy");
void *_imp__wcscpy = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscpy() {
load_dll_msvcrt();
_imp__wcscpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscpy");
}
void _elfimplib_wcscpy() {
asm("leave\njmp *%0" : : "r"(_imp__wcscpy));
}

