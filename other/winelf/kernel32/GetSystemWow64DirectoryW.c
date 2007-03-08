#include "kernel32.h"
void _elfimplib_GetSystemWow64DirectoryW() asm("GetSystemWow64DirectoryW");
void *_imp__GetSystemWow64DirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWow64DirectoryW() {
load_dll_kernel32();
_imp__GetSystemWow64DirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWow64DirectoryW");
}
void _elfimplib_GetSystemWow64DirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWow64DirectoryW));
}

