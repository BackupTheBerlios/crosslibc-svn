#include "kernel32.h"
void _elfimplib_GetNumaAvailableMemoryNode() asm("GetNumaAvailableMemoryNode");
void *_imp__GetNumaAvailableMemoryNode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaAvailableMemoryNode() {
load_dll_kernel32();
_imp__GetNumaAvailableMemoryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaAvailableMemoryNode");
}
void _elfimplib_GetNumaAvailableMemoryNode() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaAvailableMemoryNode));
}

