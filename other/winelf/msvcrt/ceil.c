#include "msvcrt.h"
void _elfimplib_ceil() asm("ceil");
void *_imp__ceil = NULL;
__attribute__((constructor)) void _elfimplib_init_ceil() {
load_dll_msvcrt();
_imp__ceil = (void *) _elf_GetProcAddress(_dll_msvcrt, "ceil");
}
void _elfimplib_ceil() {
asm("leave\njmp *%0" : : "r"(_imp__ceil));
}

