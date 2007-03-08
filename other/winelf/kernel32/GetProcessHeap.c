#include "kernel32.h"
void _elfimplib_GetProcessHeap() asm("GetProcessHeap");
void *_imp__GetProcessHeap = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessHeap() {
load_dll_kernel32();
_imp__GetProcessHeap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeap");
}
void _elfimplib_GetProcessHeap() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHeap));
}

