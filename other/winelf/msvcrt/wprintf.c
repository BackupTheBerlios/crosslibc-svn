#include "msvcrt.h"
void _elfimplib_wprintf() asm("wprintf");
void *_imp__wprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_wprintf() {
load_dll_msvcrt();
_imp__wprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "wprintf");
}
void _elfimplib_wprintf() {
asm("leave\njmp *%0" : : "r"(_imp__wprintf));
}

