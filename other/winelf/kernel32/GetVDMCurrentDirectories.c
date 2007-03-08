#include "kernel32.h"
void _elfimplib_GetVDMCurrentDirectories() asm("GetVDMCurrentDirectories");
void *_imp__GetVDMCurrentDirectories = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVDMCurrentDirectories() {
load_dll_kernel32();
_imp__GetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVDMCurrentDirectories");
}
void _elfimplib_GetVDMCurrentDirectories() {
asm("leave\njmp *%0" : : "r"(_imp__GetVDMCurrentDirectories));
}

