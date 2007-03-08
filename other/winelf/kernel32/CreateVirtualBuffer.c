#include "kernel32.h"
void _elfimplib_CreateVirtualBuffer() asm("CreateVirtualBuffer");
void *_imp__CreateVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateVirtualBuffer() {
load_dll_kernel32();
_imp__CreateVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateVirtualBuffer");
}
void _elfimplib_CreateVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__CreateVirtualBuffer));
}

