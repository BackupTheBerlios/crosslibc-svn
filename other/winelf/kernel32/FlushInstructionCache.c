#include "kernel32.h"
void _elfimplib_FlushInstructionCache() asm("FlushInstructionCache");
void *_imp__FlushInstructionCache = NULL;
__attribute__((constructor)) void _elfimplib_init_FlushInstructionCache() {
load_dll_kernel32();
_imp__FlushInstructionCache = (void *) _elf_GetProcAddress(_dll_kernel32, "FlushInstructionCache");
}
void _elfimplib_FlushInstructionCache() {
asm("leave\njmp *%0" : : "r"(_imp__FlushInstructionCache));
}

