#include "kernel32.h"
void _elfimplib_VirtualFreeEx() asm("VirtualFreeEx");
void *_imp__VirtualFreeEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualFreeEx() {
load_dll_kernel32();
_imp__VirtualFreeEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFreeEx");
}
void _elfimplib_VirtualFreeEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualFreeEx));
}

