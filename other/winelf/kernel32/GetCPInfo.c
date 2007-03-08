#include "kernel32.h"
void _elfimplib_GetCPInfo() asm("GetCPInfo");
void *_imp__GetCPInfo = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPInfo() {
load_dll_kernel32();
_imp__GetCPInfo = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPInfo");
}
void _elfimplib_GetCPInfo() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPInfo));
}

