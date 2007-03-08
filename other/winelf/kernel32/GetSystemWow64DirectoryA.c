#include "kernel32.h"
void _elfimplib_GetSystemWow64DirectoryA() asm("GetSystemWow64DirectoryA");
void *_imp__GetSystemWow64DirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWow64DirectoryA() {
load_dll_kernel32();
_imp__GetSystemWow64DirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryA");
}
void _elfimplib_GetSystemWow64DirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWow64DirectoryA));
}

