#include "kernel32.h"
void _elfimplib_SetDllDirectoryA() asm("SetDllDirectoryA");
void *_imp__SetDllDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDllDirectoryA() {
load_dll_kernel32();
_imp__SetDllDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryA");
}
void _elfimplib_SetDllDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__SetDllDirectoryA));
}

