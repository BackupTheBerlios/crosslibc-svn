#include "kernel32.h"
void _elfimplib_CreateDirectoryW() asm("CreateDirectoryW");
void *_imp__CreateDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateDirectoryW() {
load_dll_kernel32();
_imp__CreateDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateDirectoryW");
}
void _elfimplib_CreateDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateDirectoryW));
}

