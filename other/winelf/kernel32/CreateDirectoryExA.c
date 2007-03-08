#include "kernel32.h"
void _elfimplib_CreateDirectoryExA() asm("CreateDirectoryExA");
void *_imp__CreateDirectoryExA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryExA() {
load_dll_kernel32();
_imp__CreateDirectoryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryExA");
}
void _elfimplib_CreateDirectoryExA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryExA));
}

