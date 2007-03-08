#include "msvcrt.h"
void _elfimplib_getenv() asm("getenv");
void *_imp__getenv = NULL;
__attribute__((constructor)) void _elfimplib_init_getenv() {
load_dll_msvcrt();
_imp__getenv = (void *) _elf_GetProcAddress(_dll_msvcrt, "getenv");
}
void _elfimplib_getenv() {
asm("leave\njmp *%0" : : "r"(_imp__getenv));
}

