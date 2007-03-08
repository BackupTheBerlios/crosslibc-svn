#include "msvcrt.h"
void _elfimplib_floor() asm("floor");
void *_imp__floor = NULL;
__attribute__((constructor)) void _elfimplib_init_floor() {
load_dll_msvcrt();
_imp__floor = (void *) _elf_GetProcAddress(_dll_msvcrt, "floor");
}
void _elfimplib_floor() {
asm("leave\njmp *%0" : : "r"(_imp__floor));
}

