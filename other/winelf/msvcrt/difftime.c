#include "msvcrt.h"
void _elfimplib_difftime() asm("difftime");
void *_imp__difftime = NULL;
__attribute__((constructor)) void _elfimplib_init_difftime() {
load_dll_msvcrt();
_imp__difftime = (void *) _elf_GetProcAddress(_dll_msvcrt, "difftime");
}
void _elfimplib_difftime() {
asm("leave\njmp *%0" : : "r"(_imp__difftime));
}

