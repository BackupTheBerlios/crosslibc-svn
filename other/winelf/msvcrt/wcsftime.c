#include "msvcrt.h"
void _elfimplib_wcsftime() asm("wcsftime");
void *_imp__wcsftime = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsftime() {
load_dll_msvcrt();
_imp__wcsftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsftime");
}
void _elfimplib_wcsftime() {
asm("leave\njmp *%0" : : "r"(_imp__wcsftime));
}

