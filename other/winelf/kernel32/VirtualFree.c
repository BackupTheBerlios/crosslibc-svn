#include "kernel32.h"
void _elfimplib_VirtualFree() asm("VirtualFree");
void *_imp__VirtualFree = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualFree() {
load_dll_kernel32();
_imp__VirtualFree = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualFree");
}
void _elfimplib_VirtualFree() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualFree));
}

