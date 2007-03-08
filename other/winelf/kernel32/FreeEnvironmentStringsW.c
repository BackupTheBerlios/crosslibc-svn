#include "kernel32.h"
void _elfimplib_FreeEnvironmentStringsW() asm("FreeEnvironmentStringsW");
void *_imp__FreeEnvironmentStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeEnvironmentStringsW() {
load_dll_kernel32();
_imp__FreeEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeEnvironmentStringsW");
}
void _elfimplib_FreeEnvironmentStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__FreeEnvironmentStringsW));
}

