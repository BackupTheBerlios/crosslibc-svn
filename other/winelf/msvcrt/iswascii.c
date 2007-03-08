#include "msvcrt.h"
void _elfimplib_iswascii() asm("iswascii");
void *_imp__iswascii = NULL;
__attribute__((constructor)) void _elfimplib_init_iswascii() {
load_dll_msvcrt();
_imp__iswascii = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswascii");
}
void _elfimplib_iswascii() {
asm("leave\njmp *%0" : : "r"(_imp__iswascii));
}

