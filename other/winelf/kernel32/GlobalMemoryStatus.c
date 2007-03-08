#include "kernel32.h"
void _elfimplib_GlobalMemoryStatus() asm("GlobalMemoryStatus");
void *_imp__GlobalMemoryStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalMemoryStatus() {
load_dll_kernel32();
_imp__GlobalMemoryStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalMemoryStatus");
}
void _elfimplib_GlobalMemoryStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalMemoryStatus));
}

