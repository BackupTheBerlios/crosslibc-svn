#include "kernel32.h"
void _elfimplib_HeapExtend() asm("HeapExtend");
void *_imp__HeapExtend = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapExtend() {
load_dll_kernel32();
_imp__HeapExtend = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapExtend");
}
void _elfimplib_HeapExtend() {
asm("leave\njmp *%0" : : "r"(_imp__HeapExtend));
}

