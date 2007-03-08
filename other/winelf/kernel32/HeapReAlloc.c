#include "kernel32.h"
void _elfimplib_HeapReAlloc() asm("HeapReAlloc");
void *_imp__HeapReAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapReAlloc() {
load_dll_kernel32();
_imp__HeapReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapReAlloc");
}
void _elfimplib_HeapReAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__HeapReAlloc));
}

