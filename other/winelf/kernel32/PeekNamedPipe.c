#include "kernel32.h"
void _elfimplib_PeekNamedPipe() asm("PeekNamedPipe");
void *_imp__PeekNamedPipe = NULL;
__attribute__((constructor)) void _elfimplib_init_PeekNamedPipe() {
load_dll_kernel32();
_imp__PeekNamedPipe = (void *) _elf_GetProcAddress(_dll_kernel32, "PeekNamedPipe");
}
void _elfimplib_PeekNamedPipe() {
asm("leave\njmp *%0" : : "r"(_imp__PeekNamedPipe));
}

