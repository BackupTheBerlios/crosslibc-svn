#include "kernel32.h"
void _elfimplib_GetNumaNodeProcessorMask() asm("GetNumaNodeProcessorMask");
void *_imp__GetNumaNodeProcessorMask = NULL;
__attribute__((constructor)) void _elfimplib_init_GetNumaNodeProcessorMask() {
load_dll_kernel32();
_imp__GetNumaNodeProcessorMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetNumaNodeProcessorMask");
}
void _elfimplib_GetNumaNodeProcessorMask() {
asm("leave\njmp *%0" : : "r"(_imp__GetNumaNodeProcessorMask));
}

