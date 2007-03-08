#include "kernel32.h"
void _elfimplib_SetDllDirectoryW() asm("SetDllDirectoryW");
void *_imp__SetDllDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetDllDirectoryW() {
load_dll_kernel32();
_imp__SetDllDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetDllDirectoryW");
}
void _elfimplib_SetDllDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__SetDllDirectoryW));
}

