#include "kernel32.h"
void _elfimplib_LocalSize() asm("LocalSize");
void *_imp__LocalSize = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalSize() {
load_dll_kernel32();
_imp__LocalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalSize");
}
void _elfimplib_LocalSize() {
asm("leave\njmp *%0" : : "r"(_imp__LocalSize));
}

