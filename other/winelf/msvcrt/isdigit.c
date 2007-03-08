#include "msvcrt.h"
void _elfimplib_isdigit() asm("isdigit");
void *_imp__isdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_isdigit() {
load_dll_msvcrt();
_imp__isdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isdigit");
}
void _elfimplib_isdigit() {
asm("leave\njmp *%0" : : "r"(_imp__isdigit));
}

