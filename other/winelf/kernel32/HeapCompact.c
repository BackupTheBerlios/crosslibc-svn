#include "kernel32.h"
void _elfimplib_HeapCompact() asm("HeapCompact");
void *_imp__HeapCompact = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapCompact() {
load_dll_kernel32();
_imp__HeapCompact = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCompact");
}
void _elfimplib_HeapCompact() {
asm("leave\njmp *%0" : : "r"(_imp__HeapCompact));
}

