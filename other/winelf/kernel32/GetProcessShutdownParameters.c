#include "kernel32.h"
void _elfimplib_GetProcessShutdownParameters() asm("GetProcessShutdownParameters");
void *_imp__GetProcessShutdownParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessShutdownParameters() {
load_dll_kernel32();
_imp__GetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessShutdownParameters");
}
void _elfimplib_GetProcessShutdownParameters() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessShutdownParameters));
}

