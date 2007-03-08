#include "msvcrt.h"
void _elfimplib_wcsstr() asm("wcsstr");
void *_imp__wcsstr = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsstr() {
load_dll_msvcrt();
_imp__wcsstr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsstr");
}
void _elfimplib_wcsstr() {
asm("leave\njmp *%0" : : "r"(_imp__wcsstr));
}

