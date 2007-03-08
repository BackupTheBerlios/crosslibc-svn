#include "kernel32.h"
void _elfimplib_HeapWalk() asm("HeapWalk");
void *_imp__HeapWalk = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapWalk() {
load_dll_kernel32();
_imp__HeapWalk = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapWalk");
}
void _elfimplib_HeapWalk() {
asm("leave\njmp *%0" : : "r"(_imp__HeapWalk));
}

