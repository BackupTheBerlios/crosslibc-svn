#include "kernel32.h"
void _elfimplib_HeapUnlock() asm("HeapUnlock");
void *_imp__HeapUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapUnlock() {
load_dll_kernel32();
_imp__HeapUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUnlock");
}
void _elfimplib_HeapUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__HeapUnlock));
}

