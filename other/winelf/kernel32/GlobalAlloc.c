#include "kernel32.h"
void _elfimplib_GlobalAlloc() asm("GlobalAlloc");
void *_imp__GlobalAlloc = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalAlloc() {
load_dll_kernel32();
_imp__GlobalAlloc = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalAlloc");
}
void _elfimplib_GlobalAlloc() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalAlloc));
}

