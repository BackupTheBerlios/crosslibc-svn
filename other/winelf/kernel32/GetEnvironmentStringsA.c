#include "kernel32.h"
void _elfimplib_GetEnvironmentStringsA() asm("GetEnvironmentStringsA");
void *_imp__GetEnvironmentStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentStringsA() {
load_dll_kernel32();
_imp__GetEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsA");
}
void _elfimplib_GetEnvironmentStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStringsA));
}

