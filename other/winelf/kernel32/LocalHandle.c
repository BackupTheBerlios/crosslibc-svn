#include "kernel32.h"
void _elfimplib_LocalHandle() asm("LocalHandle");
void *_imp__LocalHandle = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalHandle() {
load_dll_kernel32();
_imp__LocalHandle = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalHandle");
}
void _elfimplib_LocalHandle() {
asm("leave\njmp *%0" : : "r"(_imp__LocalHandle));
}

