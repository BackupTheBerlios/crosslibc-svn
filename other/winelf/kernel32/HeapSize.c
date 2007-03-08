#include "kernel32.h"
void _elfimplib_HeapSize() asm("HeapSize");
void *_imp__HeapSize = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapSize() {
load_dll_kernel32();
_imp__HeapSize = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSize");
}
void _elfimplib_HeapSize() {
asm("leave\njmp *%0" : : "r"(_imp__HeapSize));
}

