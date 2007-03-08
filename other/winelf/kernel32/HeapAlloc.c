#include "kernel32.h"
void _elfimplib_HeapAlloc() asm("HeapAlloc");
void *_imp__HeapAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapAlloc() {
load_dll_kernel32();
_imp__HeapAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapAlloc");
}
void _elfimplib_HeapAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__HeapAlloc));
}

