#include "msvcrt.h"
void _elfimplib_strtoul() asm("strtoul");
void *_imp__strtoul = NULL;
__attribute__((constructor)) void _elfimplib_init_strtoul() {
load_dll_msvcrt();
_imp__strtoul = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtoul");
}
void _elfimplib_strtoul() {
asm("leave\njmp *%0" : : "r"(_imp__strtoul));
}

