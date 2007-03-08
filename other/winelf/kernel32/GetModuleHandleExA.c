#include "kernel32.h"
void _elfimplib_GetModuleHandleExA() asm("GetModuleHandleExA");
void *_imp__GetModuleHandleExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleExA() {
load_dll_kernel32();
_imp__GetModuleHandleExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExA");
}
void _elfimplib_GetModuleHandleExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleExA));
}

