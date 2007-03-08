#include "kernel32.h"
void _elfimplib_GetModuleHandleW() asm("GetModuleHandleW");
void *_imp__GetModuleHandleW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleW() {
load_dll_kernel32();
_imp__GetModuleHandleW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleW");
}
void _elfimplib_GetModuleHandleW() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleW));
}

