#include "msvcrt.h"
void _elfimplib_iswprint() asm("iswprint");
void *_imp__iswprint = NULL;
__attribute__((constructor)) void _elfimplib_init_iswprint() {
load_dll_msvcrt();
_imp__iswprint = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswprint");
}
void _elfimplib_iswprint() {
asm("leave\njmp *%0" : : "r"(_imp__iswprint));
}

