#include "kernel32.h"
void _elfimplib_LocalReAlloc() asm("LocalReAlloc");
void *_imp__LocalReAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalReAlloc() {
load_dll_kernel32();
_imp__LocalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalReAlloc");
}
void _elfimplib_LocalReAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__LocalReAlloc));
}

