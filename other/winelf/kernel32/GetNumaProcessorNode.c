#include "kernel32.h"
void _elfimplib_GetNumaProcessorNode() asm("GetNumaProcessorNode");
void *_imp__GetNumaProcessorNode = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaProcessorNode() {
load_dll_kernel32();
_imp__GetNumaProcessorNode = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorNode");
}
void _elfimplib_GetNumaProcessorNode() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaProcessorNode));
}

