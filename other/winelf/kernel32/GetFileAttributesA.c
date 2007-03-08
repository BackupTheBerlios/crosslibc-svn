#include "kernel32.h"
void _elfimplib_GetFileAttributesA() asm("GetFileAttributesA");
void *_imp__GetFileAttributesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesA() {
load_dll_kernel32();
_imp__GetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesA");
}
void _elfimplib_GetFileAttributesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesA));
}

