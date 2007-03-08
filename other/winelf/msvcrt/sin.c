#include "msvcrt.h"
void _elfimplib_sin() asm("sin");
void *_imp__sin = NULL;
__attribute__((constructor)) void _elfimplib_init_sin() {
load_dll_msvcrt();
_imp__sin = (void *) _elf_GetProcAddress(_dll_msvcrt, "sin");
}
void _elfimplib_sin() {
asm("leave\njmp *%0" : : "r"(_imp__sin));
}

