#include "kernel32.h"
void _elfimplib_ExtendVirtualBuffer() asm("ExtendVirtualBuffer");
void *_imp__ExtendVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_ExtendVirtualBuffer() {
load_dll_kernel32();
_imp__ExtendVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "ExtendVirtualBuffer");
}
void _elfimplib_ExtendVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__ExtendVirtualBuffer));
}

