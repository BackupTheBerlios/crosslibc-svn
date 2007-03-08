#include "kernel32.h"
void _elfimplib_GetFileAttributesExW() asm("GetFileAttributesExW");
void *_imp__GetFileAttributesExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetFileAttributesExW() {
load_dll_kernel32();
_imp__GetFileAttributesExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetFileAttributesExW");
}
void _elfimplib_GetFileAttributesExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetFileAttributesExW));
}

