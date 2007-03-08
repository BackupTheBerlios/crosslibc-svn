#include "kernel32.h"
void _elfimplib_GetNumaAvailableMemory() asm("GetNumaAvailableMemory");
void *_imp__GetNumaAvailableMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaAvailableMemory() {
load_dll_kernel32();
_imp__GetNumaAvailableMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemory");
}
void _elfimplib_GetNumaAvailableMemory() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaAvailableMemory));
}

