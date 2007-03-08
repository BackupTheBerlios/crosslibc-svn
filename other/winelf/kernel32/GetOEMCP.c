#include "kernel32.h"
void _elfimplib_GetOEMCP() asm("GetOEMCP");
void *_imp__GetOEMCP = NULL;
__attribute__((constructor)) void _elfimplib_init_GetOEMCP() {
load_dll_kernel32();
_imp__GetOEMCP = (void *) _elf_GetProcAddress(_dll_kernel32, "GetOEMCP");
}
void _elfimplib_GetOEMCP() {
asm("leave\njmp *%0" : : "r"(_imp__GetOEMCP));
}

