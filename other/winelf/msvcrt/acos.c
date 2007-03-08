#include "msvcrt.h"
void _elfimplib_acos() asm("acos");
void *_imp__acos = NULL;
__attribute__((constructor)) void _elfimplib_init_acos() {
load_dll_msvcrt();
_imp__acos = (void *) _elf_GetProcAddress(_dll_msvcrt, "acos");
}
void _elfimplib_acos() {
asm("leave\njmp *%0" : : "r"(_imp__acos));
}

