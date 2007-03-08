#include "kernel32.h"
void _elfimplib_HeapSummary() asm("HeapSummary");
void *_imp__HeapSummary = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapSummary() {
load_dll_kernel32();
_imp__HeapSummary = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSummary");
}
void _elfimplib_HeapSummary() {
asm("leave\njmp *%0" : : "r"(_imp__HeapSummary));
}

