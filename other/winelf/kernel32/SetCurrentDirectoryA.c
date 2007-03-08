#include "kernel32.h"
void _elfimplib_SetCurrentDirectoryA() asm("SetCurrentDirectoryA");
void *_imp__SetCurrentDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCurrentDirectoryA() {
load_dll_kernel32();
_imp__SetCurrentDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCurrentDirectoryA");
}
void _elfimplib_SetCurrentDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__SetCurrentDirectoryA));
}

