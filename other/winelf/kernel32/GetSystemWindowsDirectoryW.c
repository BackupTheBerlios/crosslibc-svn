#include "kernel32.h"
void _elfimplib_GetSystemWindowsDirectoryW() asm("GetSystemWindowsDirectoryW");
void *_imp__GetSystemWindowsDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemWindowsDirectoryW() {
load_dll_kernel32();
_imp__GetSystemWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemWindowsDirectoryW");
}
void _elfimplib_GetSystemWindowsDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemWindowsDirectoryW));
}

