#include "msvcrt.h"
void _elfimplib_fgetpos() asm("fgetpos");
void *_imp__fgetpos = NULL;
__attribute__((constructor)) void _elfimplib_init_fgetpos() {
load_dll_msvcrt();
_imp__fgetpos = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgetpos");
}
void _elfimplib_fgetpos() {
asm("leave\njmp *%0" : : "r"(_imp__fgetpos));
}

