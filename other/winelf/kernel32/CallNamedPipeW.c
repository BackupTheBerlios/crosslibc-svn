#include "kernel32.h"
void _elfimplib_CallNamedPipeW() asm("CallNamedPipeW");
void *_imp__CallNamedPipeW = NULL;
__attribute__((constructor)) void _elfimplib_init_CallNamedPipeW() {
load_dll_kernel32();
_imp__CallNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "CallNamedPipeW");
}
void _elfimplib_CallNamedPipeW() {
asm("leave\njmp *%0" : : "r"(_imp__CallNamedPipeW));
}

