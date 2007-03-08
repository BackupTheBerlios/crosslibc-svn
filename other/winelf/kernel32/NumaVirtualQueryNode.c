#include "kernel32.h"
void _elfimplib_NumaVirtualQueryNode() asm("NumaVirtualQueryNode");
void *_imp__NumaVirtualQueryNode = NULL;
__attribute__((constructor)) void _elfimplib_init_NumaVirtualQueryNode() {
load_dll_kernel32();
_imp__NumaVirtualQueryNode = (void *) _elf_GetProcAddress(_dll_kernel32, "NumaVirtualQueryNode");
}
void _elfimplib_NumaVirtualQueryNode() {
asm("leave\njmp *%0" : : "r"(_imp__NumaVirtualQueryNode));
}

