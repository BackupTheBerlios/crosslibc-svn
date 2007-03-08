#include "kernel32.h"
void _elfimplib_CallNamedPipeA() asm("CallNamedPipeA");
void *_imp__CallNamedPipeA = NULL;
__attribute__((constructor)) void _elfimplib_init_CallNamedPipeA() {
load_dll_kernel32();
_imp__CallNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeA");
}
void _elfimplib_CallNamedPipeA() {
asm("leave\njmp *%0" : : "r"(_imp__CallNamedPipeA));
}

