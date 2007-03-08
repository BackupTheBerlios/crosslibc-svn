#include "msvcrt.h"
void _elfimplib_strtol() asm("strtol");
void *_imp__strtol = NULL;
__attribute__((constructor)) void _elfimplib_init_strtol() {
load_dll_msvcrt();
_imp__strtol = (void *) _elf_GetProcAddress(_dll_msvcrt, "strtol");
}
void _elfimplib_strtol() {
asm("leave\njmp *%0" : : "r"(_imp__strtol));
}

