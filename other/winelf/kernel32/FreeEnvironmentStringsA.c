#include "kernel32.h"
void _elfimplib_FreeEnvironmentStringsA() asm("FreeEnvironmentStringsA");
void *_imp__FreeEnvironmentStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeEnvironmentStringsA() {
load_dll_kernel32();
_imp__FreeEnvironmentStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsA");
}
void _elfimplib_FreeEnvironmentStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__FreeEnvironmentStringsA));
}

