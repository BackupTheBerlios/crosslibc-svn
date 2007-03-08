#include "msvcrt.h"
void _elfimplib_ungetwc() asm("ungetwc");
void *_imp__ungetwc = NULL;
__attribute__((constructor)) void _elfimplib_init_ungetwc() {
load_dll_msvcrt();
_imp__ungetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "ungetwc");
}
void _elfimplib_ungetwc() {
asm("leave\njmp *%0" : : "r"(_imp__ungetwc));
}

