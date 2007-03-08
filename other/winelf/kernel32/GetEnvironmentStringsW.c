#include "kernel32.h"
void _elfimplib_GetEnvironmentStringsW() asm("GetEnvironmentStringsW");
void *_imp__GetEnvironmentStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetEnvironmentStringsW() {
load_dll_kernel32();
_imp__GetEnvironmentStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetEnvironmentStringsW");
}
void _elfimplib_GetEnvironmentStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__GetEnvironmentStringsW));
}

