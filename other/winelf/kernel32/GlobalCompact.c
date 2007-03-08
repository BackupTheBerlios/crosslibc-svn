#include "kernel32.h"
void _elfimplib_GlobalCompact() asm("GlobalCompact");
void *_imp__GlobalCompact = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalCompact() {
load_dll_kernel32();
_imp__GlobalCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalCompact");
}
void _elfimplib_GlobalCompact() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalCompact));
}

