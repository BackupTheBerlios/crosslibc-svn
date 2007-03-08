#include "kernel32.h"
void _elfimplib_LocalCompact() asm("LocalCompact");
void *_imp__LocalCompact = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalCompact() {
load_dll_kernel32();
_imp__LocalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalCompact");
}
void _elfimplib_LocalCompact() {
asm("leave\njmp *%0" : : "r"(_imp__LocalCompact));
}

