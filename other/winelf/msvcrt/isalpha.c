#include "msvcrt.h"
void _elfimplib_isalpha() asm("isalpha");
void *_imp__isalpha = NULL;
__attribute__((constructor)) void _elfimplib_init_isalpha() {
load_dll_msvcrt();
_imp__isalpha = (void *) _elf_GetProcAddress(_dll_msvcrt, "isalpha");
}
void _elfimplib_isalpha() {
asm("leave\njmp *%0" : : "r"(_imp__isalpha));
}

