#include "msvcrt.h"
void _elfimplib_iswdigit() asm("iswdigit");
void *_imp__iswdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_iswdigit() {
load_dll_msvcrt();
_imp__iswdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswdigit");
}
void _elfimplib_iswdigit() {
asm("leave\njmp *%0" : : "r"(_imp__iswdigit));
}

