#include "msvcrt.h"
void _elfimplib_fputc() asm("fputc");
void *_imp__fputc = NULL;
__attribute__((constructor)) void _elfimplib_init_fputc() {
load_dll_msvcrt();
_imp__fputc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fputc");
}
void _elfimplib_fputc() {
asm("leave\njmp *%0" : : "r"(_imp__fputc));
}

