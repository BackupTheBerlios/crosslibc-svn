#include "kernel32.h"
void _elfimplib_VirtualAllocEx() asm("VirtualAllocEx");
void *_imp__VirtualAllocEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualAllocEx() {
load_dll_kernel32();
_imp__VirtualAllocEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAllocEx");
}
void _elfimplib_VirtualAllocEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualAllocEx));
}

