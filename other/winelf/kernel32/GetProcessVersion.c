#include "kernel32.h"
void _elfimplib_GetProcessVersion() asm("GetProcessVersion");
void *_imp__GetProcessVersion = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessVersion() {
load_dll_kernel32();
_imp__GetProcessVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessVersion");
}
void _elfimplib_GetProcessVersion() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessVersion));
}

