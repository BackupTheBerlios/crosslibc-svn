#include "msvcrt.h"
void _elfimplib_isalnum() asm("isalnum");
void *_imp__isalnum = NULL;
__attribute__((constructor)) void _elfimplib_init_isalnum() {
load_dll_msvcrt();
_imp__isalnum = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalnum");
}
void _elfimplib_isalnum() {
asm("leave\njmp *%0" : : "r"(_imp__isalnum));
}

