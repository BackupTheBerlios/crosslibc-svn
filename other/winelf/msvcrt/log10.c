#include "msvcrt.h"
void _elfimplib_log10() asm("log10");
void *_imp__log10 = NULL;
__attribute__((constructor)) void _elfimplib_init_log10() {
load_dll_msvcrt();
_imp__log10 = (void *) _elf_GetProcAddress(_dll_msvcrt, "log10");
}
void _elfimplib_log10() {
asm("leave\njmp *%0" : : "r"(_imp__log10));
}

