#include "msvcrt.h"
void _elfimplib_strlen() asm("strlen");
void *_imp__strlen = NULL;
__attribute__((constructor)) void _elfimplib_init_strlen() {
load_dll_msvcrt();
_imp__strlen = (void *) _elf_GetProcAddress(_dll_msvcrt, "strlen");
}
void _elfimplib_strlen() {
asm("leave\njmp *%0" : : "r"(_imp__strlen));
}

