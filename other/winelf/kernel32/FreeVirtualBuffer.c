#include "kernel32.h"
void _elfimplib_FreeVirtualBuffer() asm("FreeVirtualBuffer");
void *_imp__FreeVirtualBuffer = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeVirtualBuffer() {
load_dll_kernel32();
_imp__FreeVirtualBuffer = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeVirtualBuffer");
}
void _elfimplib_FreeVirtualBuffer() {
asm("leave\njmp *%0" : : "r"(_imp__FreeVirtualBuffer));
}

