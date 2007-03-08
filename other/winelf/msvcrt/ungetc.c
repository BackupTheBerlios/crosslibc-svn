#include "msvcrt.h"
void _elfimplib_ungetc() asm("ungetc");
void *_imp__ungetc = NULL;
__attribute__((constructor)) void _elfimplib_init_ungetc() {
load_dll_msvcrt();
_imp__ungetc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetc");
}
void _elfimplib_ungetc() {
asm("leave\njmp *%0" : : "r"(_imp__ungetc));
}

