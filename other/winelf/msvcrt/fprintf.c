#include "msvcrt.h"
void _elfimplib_fprintf() asm("fprintf");
void *_imp__fprintf = NULL;
__attribute__((constructor)) void _elfimplib_init_fprintf() {
load_dll_msvcrt();
_imp__fprintf = (void *) _elf_GetProcAddress(_dll_msvcrt, "fprintf");
}
void _elfimplib_fprintf() {
asm("leave\njmp *%0" : : "r"(_imp__fprintf));
}

