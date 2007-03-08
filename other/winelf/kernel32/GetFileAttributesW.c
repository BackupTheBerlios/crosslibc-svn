#include "kernel32.h"
void _elfimplib_GetFileAttributesW() asm("GetFileAttributesW");
void *_imp__GetFileAttributesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesW() {
load_dll_kernel32();
_imp__GetFileAttributesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesW");
}
void _elfimplib_GetFileAttributesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesW));
}

