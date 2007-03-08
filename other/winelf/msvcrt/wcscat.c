#include "msvcrt.h"
void _elfimplib_wcscat() asm("wcscat");
void *_imp__wcscat = NULL;
__attribute__((constructor)) void _elfimplib_init_wcscat() {
load_dll_msvcrt();
_imp__wcscat = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcscat");
}
void _elfimplib_wcscat() {
asm("leave\njmp *%0" : : "r"(_imp__wcscat));
}

