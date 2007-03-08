#include "kernel32.h"
void _elfimplib_HeapDestroy() asm("HeapDestroy");
void *_imp__HeapDestroy = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapDestroy() {
load_dll_kernel32();
_imp__HeapDestroy = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapDestroy");
}
void _elfimplib_HeapDestroy() {
asm("leave\njmp *%0" : : "r"(_imp__HeapDestroy));
}

