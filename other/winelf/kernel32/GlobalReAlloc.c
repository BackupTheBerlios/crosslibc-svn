#include "kernel32.h"
void _elfimplib_GlobalReAlloc() asm("GlobalReAlloc");
void *_imp__GlobalReAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalReAlloc() {
load_dll_kernel32();
_imp__GlobalReAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalReAlloc");
}
void _elfimplib_GlobalReAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalReAlloc));
}

