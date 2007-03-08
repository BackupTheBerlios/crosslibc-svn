#include "kernel32.h"
void _elfimplib_GetCPInfoExA() asm("GetCPInfoExA");
void *_imp__GetCPInfoExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPInfoExA() {
load_dll_kernel32();
_imp__GetCPInfoExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExA");
}
void _elfimplib_GetCPInfoExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfoExA));
}

