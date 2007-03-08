#include "kernel32.h"
void _elfimplib_FlushFileBuffers() asm("FlushFileBuffers");
void *_imp__FlushFileBuffers = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushFileBuffers() {
load_dll_kernel32();
_imp__FlushFileBuffers = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushFileBuffers");
}
void _elfimplib_FlushFileBuffers() {
asm("leave\njmp *%0" : : "r"(_imp__FlushFileBuffers));
}

