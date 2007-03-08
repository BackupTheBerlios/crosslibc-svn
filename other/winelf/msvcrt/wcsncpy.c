#include "msvcrt.h"
void _elfimplib_wcsncpy() asm("wcsncpy");
void *_imp__wcsncpy = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsncpy() {
load_dll_msvcrt();
_imp__wcsncpy = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsncpy");
}
void _elfimplib_wcsncpy() {
asm("leave\njmp *%0" : : "r"(_imp__wcsncpy));
}

