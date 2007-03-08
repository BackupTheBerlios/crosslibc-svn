#include "msvcrt.h"
void _elfimplib_wcsxfrm() asm("wcsxfrm");
void *_imp__wcsxfrm = NULL;
__attribute__((constructor)) void _elfimplib_init_wcsxfrm() {
load_dll_msvcrt();
_imp__wcsxfrm = (void *) _elf_GetProcAddress(_dll_msvcrt, "wcsxfrm");
}
void _elfimplib_wcsxfrm() {
asm("leave\njmp *%0" : : "r"(_imp__wcsxfrm));
}

