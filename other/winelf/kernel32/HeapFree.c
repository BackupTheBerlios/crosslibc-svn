#include "kernel32.h"
void _elfimplib_HeapFree() asm("HeapFree");
void *_imp__HeapFree = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapFree() {
load_dll_kernel32();
_imp__HeapFree = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapFree");
}
void _elfimplib_HeapFree() {
asm("leave\njmp *%0" : : "r"(_imp__HeapFree));
}

