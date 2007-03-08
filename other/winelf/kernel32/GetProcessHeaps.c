#include "kernel32.h"
void _elfimplib_GetProcessHeaps() asm("GetProcessHeaps");
void *_imp__GetProcessHeaps = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessHeaps() {
load_dll_kernel32();
_imp__GetProcessHeaps = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessHeaps");
}
void _elfimplib_GetProcessHeaps() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessHeaps));
}

