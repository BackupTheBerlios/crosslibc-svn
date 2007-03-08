#include "msvcrt.h"
void _elfimplib_wcsncmp() asm("wcsncmp");
void *_imp__wcsncmp = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsncmp() {
load_dll_msvcrt();
_imp__wcsncmp = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncmp");
}
void _elfimplib_wcsncmp() {
asm("leave\njmp *%0" : : "r"(_imp__wcsncmp));
}

