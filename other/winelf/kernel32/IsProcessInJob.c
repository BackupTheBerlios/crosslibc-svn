#include "kernel32.h"
void _elfimplib_IsProcessInJob() asm("IsProcessInJob");
void *_imp__IsProcessInJob = NULL;
__attribute__((constructor)) void _elfimplib_init_IsProcessInJob() {
load_dll_kernel32();
_imp__IsProcessInJob = (void *) _elf_GetProcAddress(_dll_kernel32, "IsProcessInJob");
}
void _elfimplib_IsProcessInJob() {
asm("leave\njmp *%0" : : "r"(_imp__IsProcessInJob));
}

