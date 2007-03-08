#include "msvcrt.h"
void _elfimplib_system() asm("system");
void *_imp__system = NULL;
__attribute__((constructor)) void _elfimplib_init_system() {
load_dll_msvcrt();
_imp__system = (void *) _elf_GetProcAddress(_dll_msvcrt, "system");
}
void _elfimplib_system() {
asm("leave\njmp *%0" : : "r"(_imp__system));
}

