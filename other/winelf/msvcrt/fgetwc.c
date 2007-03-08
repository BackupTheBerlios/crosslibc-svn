#include "msvcrt.h"
void _elfimplib_fgetwc() asm("fgetwc");
void *_imp__fgetwc = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetwc() {
load_dll_msvcrt();
_imp__fgetwc = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetwc");
}
void _elfimplib_fgetwc() {
asm("leave\njmp *%0" : : "r"(_imp__fgetwc));
}

