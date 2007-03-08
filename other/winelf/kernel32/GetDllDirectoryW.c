#include "kernel32.h"
void _elfimplib_GetDllDirectoryW() asm("GetDllDirectoryW");
void *_imp__GetDllDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDllDirectoryW() {
load_dll_kernel32();
_imp__GetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDllDirectoryW");
}
void _elfimplib_GetDllDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDllDirectoryW));
}

