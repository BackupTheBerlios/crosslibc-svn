#include "kernel32.h"
void _elfimplib_GetVersion() asm("GetVersion");
void *_imp__GetVersion = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVersion() {
load_dll_kernel32();
_imp__GetVersion = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersion");
}
void _elfimplib_GetVersion() {
asm("leave\njmp *%0" : : "r"(_imp__GetVersion));
}

