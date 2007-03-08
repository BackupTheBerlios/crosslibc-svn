#include "kernel32.h"
void _elfimplib_GetEnvironmentStrings() asm("GetEnvironmentStrings");
void *_imp__GetEnvironmentStrings = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentStrings() {
load_dll_kernel32();
_imp__GetEnvironmentStrings = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStrings");
}
void _elfimplib_GetEnvironmentStrings() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStrings));
}

