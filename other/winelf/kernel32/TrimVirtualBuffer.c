#include "kernel32.h"
void _elfimplib_TrimVirtualBuffer() asm("TrimVirtualBuffer");
void *_imp__TrimVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_TrimVirtualBuffer() {
load_dll_kernel32();
_imp__TrimVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "TrimVirtualBuffer");
}
void _elfimplib_TrimVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__TrimVirtualBuffer));
}

