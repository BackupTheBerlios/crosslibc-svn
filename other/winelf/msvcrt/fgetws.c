#include "msvcrt.h"
void _elfimplib_fgetws() asm("fgetws");
void *_imp__fgetws = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetws() {
load_dll_msvcrt();
_imp__fgetws = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetws");
}
void _elfimplib_fgetws() {
asm("leave\njmp *%0" : : "r"(_imp__fgetws));
}

