#include "msvcrt.h"
void _elfimplib_toupper() asm("toupper");
void *_imp__toupper = NULL;
__attribute__((constructor)) void _elfimplib_init_toupper() {
load_dll_msvcrt();
_imp__toupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "toupper");
}
void _elfimplib_toupper() {
asm("leave\njmp *%0" : : "r"(_imp__toupper));
}

