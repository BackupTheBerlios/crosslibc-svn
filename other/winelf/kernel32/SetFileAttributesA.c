#include "kernel32.h"
void _elfimplib_SetFileAttributesA() asm("SetFileAttributesA");
void *_imp__SetFileAttributesA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileAttributesA() {
load_dll_kernel32();
_imp__SetFileAttributesA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesA");
}
void _elfimplib_SetFileAttributesA() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileAttributesA));
}

