#include "kernel32.h"
void _elfimplib_VirtualProtect() asm("VirtualProtect");
void *_imp__VirtualProtect = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualProtect() {
load_dll_kernel32();
_imp__VirtualProtect = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualProtect");
}
void _elfimplib_VirtualProtect() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualProtect));
}

