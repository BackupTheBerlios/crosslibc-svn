#include "kernel32.h"
void _elfimplib_GetCPInfoExW() asm("GetCPInfoExW");
void *_imp__GetCPInfoExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPInfoExW() {
load_dll_kernel32();
_imp__GetCPInfoExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfoExW");
}
void _elfimplib_GetCPInfoExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfoExW));
}

