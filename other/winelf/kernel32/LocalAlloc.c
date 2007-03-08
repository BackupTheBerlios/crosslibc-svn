#include "kernel32.h"
void _elfimplib_LocalAlloc() asm("LocalAlloc");
void *_imp__LocalAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalAlloc() {
load_dll_kernel32();
_imp__LocalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalAlloc");
}
void _elfimplib_LocalAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__LocalAlloc));
}

