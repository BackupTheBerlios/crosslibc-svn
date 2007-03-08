#include "kernel32.h"
void _elfimplib_GetEnvironmentVariableA() asm("GetEnvironmentVariableA");
void *_imp__GetEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentVariableA() {
load_dll_kernel32();
_imp__GetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableA");
}
void _elfimplib_GetEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentVariableA));
}

