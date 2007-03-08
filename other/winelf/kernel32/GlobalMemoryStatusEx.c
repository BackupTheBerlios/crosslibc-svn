#include "kernel32.h"
void _elfimplib_GlobalMemoryStatusEx() asm("GlobalMemoryStatusEx");
void *_imp__GlobalMemoryStatusEx = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalMemoryStatusEx() {
load_dll_kernel32();
_imp__GlobalMemoryStatusEx = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatusEx");
}
void _elfimplib_GlobalMemoryStatusEx() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalMemoryStatusEx));
}

