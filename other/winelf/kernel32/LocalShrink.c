#include "kernel32.h"
void _elfimplib_LocalShrink() asm("LocalShrink");
void *_imp__LocalShrink = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalShrink() {
load_dll_kernel32();
_imp__LocalShrink = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalShrink");
}
void _elfimplib_LocalShrink() {
asm("leave\njmp *%0" : : "r"(_imp__LocalShrink));
}

