#include "kernel32.h"
void _elfimplib_WaitNamedPipeW() asm("WaitNamedPipeW");
void *_imp__WaitNamedPipeW = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitNamedPipeW() {
load_dll_kernel32();
_imp__WaitNamedPipeW = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeW");
}
void _elfimplib_WaitNamedPipeW() {
asm("leave\njmp *%0" : : "r"(_imp__WaitNamedPipeW));
}

