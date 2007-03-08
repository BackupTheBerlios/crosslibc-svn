#include "kernel32.h"
void _elfimplib_GetLogicalDriveStringsA() asm("GetLogicalDriveStringsA");
void *_imp__GetLogicalDriveStringsA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLogicalDriveStringsA() {
load_dll_kernel32();
_imp__GetLogicalDriveStringsA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsA");
}
void _elfimplib_GetLogicalDriveStringsA() {
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDriveStringsA));
}

