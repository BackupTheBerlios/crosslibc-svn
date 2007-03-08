#include "kernel32.h"
void _elfimplib_GetDiskFreeSpaceW() asm("GetDiskFreeSpaceW");
void *_imp__GetDiskFreeSpaceW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDiskFreeSpaceW() {
load_dll_kernel32();
_imp__GetDiskFreeSpaceW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDiskFreeSpaceW");
}
void _elfimplib_GetDiskFreeSpaceW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDiskFreeSpaceW));
}

