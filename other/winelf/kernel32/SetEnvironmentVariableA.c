#include "kernel32.h"
void _elfimplib_SetEnvironmentVariableA() asm("SetEnvironmentVariableA");
void *_imp__SetEnvironmentVariableA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetEnvironmentVariableA() {
load_dll_kernel32();
_imp__SetEnvironmentVariableA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableA");
}
void _elfimplib_SetEnvironmentVariableA() {
asm("leave\njmp *%0" : : "r"(_imp__SetEnvironmentVariableA));
}

