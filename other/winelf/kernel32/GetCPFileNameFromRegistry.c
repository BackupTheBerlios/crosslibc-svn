#include "kernel32.h"
void _elfimplib_GetCPFileNameFromRegistry() asm("GetCPFileNameFromRegistry");
void *_imp__GetCPFileNameFromRegistry = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCPFileNameFromRegistry() {
load_dll_kernel32();
_imp__GetCPFileNameFromRegistry = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCPFileNameFromRegistry");
}
void _elfimplib_GetCPFileNameFromRegistry() {
asm("leave\njmp *%0" : : "r"(_imp__GetCPFileNameFromRegistry));
}

