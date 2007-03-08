#include "kernel32.h"
void _elfimplib_GetWindowsDirectoryA() asm("GetWindowsDirectoryA");
void *_imp__GetWindowsDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowsDirectoryA() {
load_dll_kernel32();
_imp__GetWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryA");
}
void _elfimplib_GetWindowsDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowsDirectoryA));
}

