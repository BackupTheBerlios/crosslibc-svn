#include "msvcrt.h"
void _elfimplib_wcsrchr() asm("wcsrchr");
void *_imp__wcsrchr = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsrchr() {
load_dll_msvcrt();
_imp__wcsrchr = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsrchr");
}
void _elfimplib_wcsrchr() {
asm("leave\njmp *%0" : : "r"(_imp__wcsrchr));
}

