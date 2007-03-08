#include "kernel32.h"
void _elfimplib_SetProcessShutdownParameters() asm("SetProcessShutdownParameters");
void *_imp__SetProcessShutdownParameters = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessShutdownParameters() {
load_dll_kernel32();
_imp__SetProcessShutdownParameters = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessShutdownParameters");
}
void _elfimplib_SetProcessShutdownParameters() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessShutdownParameters));
}

