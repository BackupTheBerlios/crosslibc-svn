#include "kernel32.h"
void _elfimplib_GetSystemWindowsDirectoryA() asm("GetSystemWindowsDirectoryA");
void *_imp__GetSystemWindowsDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWindowsDirectoryA() {
load_dll_kernel32();
_imp__GetSystemWindowsDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryA");
}
void _elfimplib_GetSystemWindowsDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWindowsDirectoryA));
}

