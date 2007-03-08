#include "msvcrt.h"
void _elfimplib_iswgraph() asm("iswgraph");
void *_imp__iswgraph = NULL;
__attribute__((constructor)) void _elfimplib_init_iswgraph() {
load_dll_msvcrt();
_imp__iswgraph = (void *) _elf_GetProcAddress(_dll_msvcrt, "iswgraph");
}
void _elfimplib_iswgraph() {
asm("leave\njmp *%0" : : "r"(_imp__iswgraph));
}

