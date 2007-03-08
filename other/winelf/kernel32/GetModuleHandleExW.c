#include "kernel32.h"
void _elfimplib_GetModuleHandleExW() asm("GetModuleHandleExW");
void *_imp__GetModuleHandleExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetModuleHandleExW() {
load_dll_kernel32();
_imp__GetModuleHandleExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetModuleHandleExW");
}
void _elfimplib_GetModuleHandleExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetModuleHandleExW));
}

