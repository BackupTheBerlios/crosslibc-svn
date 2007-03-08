#include "kernel32.h"
void _elfimplib_Heap32Next() asm("Heap32Next");
void *_imp__Heap32Next = NULL;
__attribute__((constructor)) void _elfimplib_init_Heap32Next() {
load_dll_kernel32();
_imp__Heap32Next = (void *) _elf_GetProcAddress(_dll_kernel32, "Heap32Next");
}
void _elfimplib_Heap32Next() {
asm("leave\njmp *%0" : : "r"(_imp__Heap32Next));
}

