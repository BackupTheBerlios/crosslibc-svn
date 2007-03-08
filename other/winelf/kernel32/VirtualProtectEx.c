#include "kernel32.h"
void _elfimplib_VirtualProtectEx() asm("VirtualProtectEx");
void *_imp__VirtualProtectEx = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualProtectEx() {
load_dll_kernel32();
_imp__VirtualProtectEx = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtectEx");
}
void _elfimplib_VirtualProtectEx() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualProtectEx));
}

