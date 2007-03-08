#include "kernel32.h"
void _elfimplib_RemoveDirectoryA() asm("RemoveDirectoryA");
void *_imp__RemoveDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_RemoveDirectoryA() {
load_dll_kernel32();
_imp__RemoveDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "RemoveDirectoryA");
}
void _elfimplib_RemoveDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__RemoveDirectoryA));
}

