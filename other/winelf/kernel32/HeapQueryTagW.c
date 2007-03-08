#include "kernel32.h"
void _elfimplib_HeapQueryTagW() asm("HeapQueryTagW");
void *_imp__HeapQueryTagW = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapQueryTagW() {
load_dll_kernel32();
_imp__HeapQueryTagW = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryTagW");
}
void _elfimplib_HeapQueryTagW() {
asm("leave\njmp *%0" : : "r"(_imp__HeapQueryTagW));
}

