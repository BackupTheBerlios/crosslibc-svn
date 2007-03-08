#include "kernel32.h"
void _elfimplib_LoadResource() asm("LoadResource");
void *_imp__LoadResource = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadResource() {
load_dll_kernel32();
_imp__LoadResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadResource");
}
void _elfimplib_LoadResource() {
asm("leave\njmp *%0" : : "r"(_imp__LoadResource));
}

