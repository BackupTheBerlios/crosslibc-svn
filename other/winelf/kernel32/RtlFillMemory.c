#include "kernel32.h"
void _elfimplib_RtlFillMemory() asm("RtlFillMemory");
void *_imp__RtlFillMemory = NULL;
__attribute__((constructor)) void _elfimplib_init_RtlFillMemory() {
load_dll_kernel32();
_imp__RtlFillMemory = (void *) _elf_GetProcAddress(_dll_kernel32, "RtlFillMemory");
}
void _elfimplib_RtlFillMemory() {
asm("leave\njmp *%0" : : "r"(_imp__RtlFillMemory));
}

