#include "kernel32.h"
void _elfimplib_GetVersionExA() asm("GetVersionExA");
void *_imp__GetVersionExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVersionExA() {
load_dll_kernel32();
_imp__GetVersionExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVersionExA");
}
void _elfimplib_GetVersionExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVersionExA));
}

