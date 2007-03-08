#include "kernel32.h"
void _elfimplib_SetFileAttributesW() asm("SetFileAttributesW");
void *_imp__SetFileAttributesW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileAttributesW() {
load_dll_kernel32();
_imp__SetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileAttributesW");
}
void _elfimplib_SetFileAttributesW() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileAttributesW));
}

