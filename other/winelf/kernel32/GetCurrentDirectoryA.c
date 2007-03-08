#include "kernel32.h"
void _elfimplib_GetCurrentDirectoryA() asm("GetCurrentDirectoryA");
void *_imp__GetCurrentDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentDirectoryA() {
load_dll_kernel32();
_imp__GetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentDirectoryA");
}
void _elfimplib_GetCurrentDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentDirectoryA));
}

