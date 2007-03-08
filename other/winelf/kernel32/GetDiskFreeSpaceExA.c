#include "kernel32.h"
void _elfimplib_GetDiskFreeSpaceExA() asm("GetDiskFreeSpaceExA");
void *_imp__GetDiskFreeSpaceExA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceExA() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExA");
}
void _elfimplib_GetDiskFreeSpaceExA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceExA));
}

