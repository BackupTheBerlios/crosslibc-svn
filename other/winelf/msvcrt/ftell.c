#include "msvcrt.h"
void _elfimplib_ftell() asm("ftell");
void *_imp__ftell = NULL;
__attribute__((constructor)) void _elfimplib_init_ftell() {
load_dll_msvcrt();
_imp__ftell = (void *) _elf_GetProcAddress(_dll_msvcrt, "ftell");
}
void _elfimplib_ftell() {
asm("leave\njmp *%0" : : "r"(_imp__ftell));
}

