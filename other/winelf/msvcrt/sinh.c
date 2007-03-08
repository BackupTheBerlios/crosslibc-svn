#include "msvcrt.h"
void _elfimplib_sinh() asm("sinh");
void *_imp__sinh = NULL;
__attribute__((constructor)) void _elfimplib_init_sinh() {
load_dll_msvcrt();
_imp__sinh = (void *) _elf_GetProcAddress(_dll_msvcrt, "sinh");
}
void _elfimplib_sinh() {
asm("leave\njmp *%0" : : "r"(_imp__sinh));
}

