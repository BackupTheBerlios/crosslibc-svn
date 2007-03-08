#include "msvcrt.h"
void _elfimplib_wctomb() asm("wctomb");
void *_imp__wctomb = NULL;
__attribute__((constructor)) void _elfimplib_init_wctomb() {
load_dll_msvcrt();
_imp__wctomb = (void *) _elf_GetProcAddress(_dll_msvcrt, "wctomb");
}
void _elfimplib_wctomb() {
asm("leave\njmp *%0" : : "r"(_imp__wctomb));
}

