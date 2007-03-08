#include "kernel32.h"
void _elfimplib_OutputDebugStringA() asm("OutputDebugStringA");
void *_imp__OutputDebugStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_OutputDebugStringA() {
load_dll_kernel32();
_imp__OutputDebugStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringA");
}
void _elfimplib_OutputDebugStringA() {
asm("leave\njmp *%0" : : "r"(_imp__OutputDebugStringA));
}

