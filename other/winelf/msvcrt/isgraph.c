#include "msvcrt.h"
void _elfimplib_isgraph() asm("isgraph");
void *_imp__isgraph = NULL;
__attribute__((constructor)) void _elfimplib_init_isgraph() {
load_dll_msvcrt();
_imp__isgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "isgraph");
}
void _elfimplib_isgraph() {
asm("leave\njmp *%0" : : "r"(_imp__isgraph));
}

