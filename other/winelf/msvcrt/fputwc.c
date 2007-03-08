#include "msvcrt.h"
void _elfimplib_fputwc() asm("fputwc");
void *_imp__fputwc = NULL;
__attribute__((constructor)) void _elfimplib_init_fputwc() {
load_dll_msvcrt();
_imp__fputwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputwc");
}
void _elfimplib_fputwc() {
asm("leave\njmp *%0" : : "r"(_imp__fputwc));
}

