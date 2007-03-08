#include "msvcrt.h"
void _elfimplib_isxdigit() asm("isxdigit");
void *_imp__isxdigit = NULL;
__attribute__((constructor)) void _elfimplib_init_isxdigit() {
load_dll_msvcrt();
_imp__isxdigit = (void *) _elf_GetProcAddress(_dll_msvcrt, "isxdigit");
}
void _elfimplib_isxdigit() {
asm("leave\njmp *%0" : : "r"(_imp__isxdigit));
}

