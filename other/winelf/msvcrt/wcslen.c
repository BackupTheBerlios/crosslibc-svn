#include "msvcrt.h"
void _elfimplib_wcslen() asm("wcslen");
void *_imp__wcslen = NULL;
__attribute__((constructor)) void _elfimplib_init_wcslen() {
load_dll_msvcrt();
_imp__wcslen = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcslen");
}
void _elfimplib_wcslen() {
asm("leave\njmp *%0" : : "r"(_imp__wcslen));
}

