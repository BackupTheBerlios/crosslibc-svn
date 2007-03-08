#include "kernel32.h"
void _elfimplib_SetEnvironmentVariableW() asm("SetEnvironmentVariableW");
void *_imp__SetEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetEnvironmentVariableW() {
load_dll_kernel32();
_imp__SetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetEnvironmentVariableW");
}
void _elfimplib_SetEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__SetEnvironmentVariableW));
}

