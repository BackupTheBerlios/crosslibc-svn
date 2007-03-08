#include "msvcrt.h"
void _elfimplib_fgets() asm("fgets");
void *_imp__fgets = NULL;
__attribute__((constructor)) void _elfimplib_init_fgets() {
load_dll_msvcrt();
_imp__fgets = (void *) _elf_GetProcAddress(_dll_msvcrt, "fgets");
}
void _elfimplib_fgets() {
asm("leave\njmp *%0" : : "r"(_imp__fgets));
}

