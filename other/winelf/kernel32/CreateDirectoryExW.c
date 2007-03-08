#include "kernel32.h"
void _elfimplib_CreateDirectoryExW() asm("CreateDirectoryExW");
void *_imp__CreateDirectoryExW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryExW() {
load_dll_kernel32();
_imp__CreateDirectoryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExW");
}
void _elfimplib_CreateDirectoryExW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryExW));
}

