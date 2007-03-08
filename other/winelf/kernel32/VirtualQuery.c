#include "kernel32.h"
void _elfimplib_VirtualQuery() asm("VirtualQuery");
void *_imp__VirtualQuery = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualQuery() {
load_dll_kernel32();
_imp__VirtualQuery = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualQuery");
}
void _elfimplib_VirtualQuery() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualQuery));
}

