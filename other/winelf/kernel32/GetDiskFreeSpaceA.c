#include "kernel32.h"
void _elfimplib_GetDiskFreeSpaceA() asm("GetDiskFreeSpaceA");
void *_imp__GetDiskFreeSpaceA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceA() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceA");
}
void _elfimplib_GetDiskFreeSpaceA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceA));
}

