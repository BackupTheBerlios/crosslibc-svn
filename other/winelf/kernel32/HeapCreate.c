#include "kernel32.h"
void _elfimplib_HeapCreate() asm("HeapCreate");
void *_imp__HeapCreate = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapCreate() {
load_dll_kernel32();
_imp__HeapCreate = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapCreate");
}
void _elfimplib_HeapCreate() {
asm("leave\njmp *%0" : : "r"(_imp__HeapCreate));
}

