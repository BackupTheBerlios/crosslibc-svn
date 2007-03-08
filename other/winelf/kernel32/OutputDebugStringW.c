#include "kernel32.h"
void _elfimplib_OutputDebugStringW() asm("OutputDebugStringW");
void *_imp__OutputDebugStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_OutputDebugStringW() {
load_dll_kernel32();
_imp__OutputDebugStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "OutputDebugStringW");
}
void _elfimplib_OutputDebugStringW() {
asm("leave\njmp *%0" : : "r"(_imp__OutputDebugStringW));
}

