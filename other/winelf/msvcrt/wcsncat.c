#include "msvcrt.h"
void _elfimplib_wcsncat() asm("wcsncat");
void *_imp__wcsncat = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsncat() {
load_dll_msvcrt();
_imp__wcsncat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncat");
}
void _elfimplib_wcsncat() {
asm("leave\njmp *%0" : : "r"(_imp__wcsncat));
}

