#include "kernel32.h"
void _elfimplib_GetModuleHandleA() asm("GetModuleHandleA");
void *_imp__GetModuleHandleA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleA() {
load_dll_kernel32();
_imp__GetModuleHandleA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleA");
}
void _elfimplib_GetModuleHandleA() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleA));
}

