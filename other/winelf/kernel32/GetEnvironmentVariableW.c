#include "kernel32.h"
void _elfimplib_GetEnvironmentVariableW() asm("GetEnvironmentVariableW");
void *_imp__GetEnvironmentVariableW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentVariableW() {
load_dll_kernel32();
_imp__GetEnvironmentVariableW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentVariableW");
}
void _elfimplib_GetEnvironmentVariableW() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentVariableW));
}

