#include "kernel32.h"
void _elfimplib_GlobalHandle() asm("GlobalHandle");
void *_imp__GlobalHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalHandle() {
load_dll_kernel32();
_imp__GlobalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalHandle");
}
void _elfimplib_GlobalHandle() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalHandle));
}

