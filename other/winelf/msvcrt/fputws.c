#include "msvcrt.h"
void _elfimplib_fputws() asm("fputws");
void *_imp__fputws = NULL;
__attribute__((constructor)) void _elfimplib_init_fputws() {
load_dll_msvcrt();
_imp__fputws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputws");
}
void _elfimplib_fputws() {
asm("leave\njmp *%0" : : "r"(_imp__fputws));
}

