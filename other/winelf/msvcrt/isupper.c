#include "msvcrt.h"
void _elfimplib_isupper() asm("isupper");
void *_imp__isupper = NULL;
__attribute__((constructor)) void _elfimplib_init_isupper() {
load_dll_msvcrt();
_imp__isupper = (void *) _elf_GetProcAddress(_dll_msvcrt, "isupper");
}
void _elfimplib_isupper() {
asm("leave\njmp *%0" : : "r"(_imp__isupper));
}

