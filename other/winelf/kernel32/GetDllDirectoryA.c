#include "kernel32.h"
void _elfimplib_GetDllDirectoryA() asm("GetDllDirectoryA");
void *_imp__GetDllDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDllDirectoryA() {
load_dll_kernel32();
_imp__GetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryA");
}
void _elfimplib_GetDllDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDllDirectoryA));
}

