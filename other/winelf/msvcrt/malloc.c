#include "msvcrt.h"
void _elfimplib_malloc() asm("malloc");
void *_imp__malloc = NULL;
__attribute__((constructor)) void _elfimplib_init_malloc() {
load_dll_msvcrt();
_imp__malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "malloc");
}
void _elfimplib_malloc() {
asm("leave\njmp *%0" : : "r"(_imp__malloc));
}

