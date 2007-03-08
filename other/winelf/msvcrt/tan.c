#include "msvcrt.h"
void _elfimplib_tan() asm("tan");
void *_imp__tan = NULL;
__attribute__((constructor)) void _elfimplib_init_tan() {
load_dll_msvcrt();
_imp__tan = (void *) _elf_GetProcAddress(_dll_msvcrt, "tan");
}
void _elfimplib_tan() {
asm("leave\njmp *%0" : : "r"(_imp__tan));
}

