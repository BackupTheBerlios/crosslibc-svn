#include "kernel32.h"
void _elfimplib_GetWindowsDirectoryW() asm("GetWindowsDirectoryW");
void *_imp__GetWindowsDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetWindowsDirectoryW() {
load_dll_kernel32();
_imp__GetWindowsDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetWindowsDirectoryW");
}
void _elfimplib_GetWindowsDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetWindowsDirectoryW));
}

