#include "kernel32.h"
void _elfimplib_GetNumaProcessorMap() asm("GetNumaProcessorMap");
void *_imp__GetNumaProcessorMap = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaProcessorMap() {
load_dll_kernel32();
_imp__GetNumaProcessorMap = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaProcessorMap");
}
void _elfimplib_GetNumaProcessorMap() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaProcessorMap));
}

