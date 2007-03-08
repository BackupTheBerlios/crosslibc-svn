#include "kernel32.h"
void _elfimplib_GetFileAttributesExA() asm("GetFileAttributesExA");
void *_imp__GetFileAttributesExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesExA() {
load_dll_kernel32();
_imp__GetFileAttributesExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExA");
}
void _elfimplib_GetFileAttributesExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesExA));
}

