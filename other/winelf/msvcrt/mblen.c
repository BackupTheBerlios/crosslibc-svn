#include "msvcrt.h"
void _elfimplib_mblen() asm("mblen");
void *_imp__mblen = NULL;
__attribute__((constructor)) void _elfimplib_init_mblen() {
load_dll_msvcrt();
_imp__mblen = (void *) _elf_GetProcAddress(_dll_msvcrt, "mblen");
}
void _elfimplib_mblen() {
asm("leave\njmp *%0" : : "r"(_imp__mblen));
}

