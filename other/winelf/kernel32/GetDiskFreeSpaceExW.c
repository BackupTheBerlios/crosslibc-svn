#include "kernel32.h"
void _elfimplib_GetDiskFreeSpaceExW() asm("GetDiskFreeSpaceExW");
void *_imp__GetDiskFreeSpaceExW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceExW() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceExW");
}
void _elfimplib_GetDiskFreeSpaceExW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceExW));
}

