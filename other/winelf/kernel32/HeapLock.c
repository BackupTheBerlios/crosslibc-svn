#include "kernel32.h"
void _elfimplib_HeapLock() asm("HeapLock");
void *_imp__HeapLock = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapLock() {
load_dll_kernel32();
_imp__HeapLock = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapLock");
}
void _elfimplib_HeapLock() {
asm("leave\njmp *%0" : : "r"(_imp__HeapLock));
}

