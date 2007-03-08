#include "kernel32.h"
void _elfimplib_WaitNamedPipeA() asm("WaitNamedPipeA");
void *_imp__WaitNamedPipeA = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitNamedPipeA() {
load_dll_kernel32();
_imp__WaitNamedPipeA = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitNamedPipeA");
}
void _elfimplib_WaitNamedPipeA() {
asm("leave\njmp *%0" : : "r"(_imp__WaitNamedPipeA));
}

