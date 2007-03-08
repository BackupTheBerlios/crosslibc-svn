#include "kernel32.h"
void _elfimplib_VirtualAlloc() asm("VirtualAlloc");
void *_imp__VirtualAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualAlloc() {
load_dll_kernel32();
_imp__VirtualAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualAlloc");
}
void _elfimplib_VirtualAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualAlloc));
}

