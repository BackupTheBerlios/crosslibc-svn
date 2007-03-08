#include "kernel32.h"
void _elfimplib_CreateDirectoryA() asm("CreateDirectoryA");
void *_imp__CreateDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryA() {
load_dll_kernel32();
_imp__CreateDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryA");
}
void _elfimplib_CreateDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryA));
}

