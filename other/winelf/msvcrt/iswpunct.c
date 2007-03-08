#include "msvcrt.h"
void _elfimplib_iswpunct() asm("iswpunct");
void *_imp__iswpunct = NULL;
__attribute__((constructor)) void _elfimplib_init_iswpunct() {
load_dll_msvcrt();
_imp__iswpunct = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswpunct");
}
void _elfimplib_iswpunct() {
asm("leave\njmp *%0" : : "r"(_imp__iswpunct));
}

