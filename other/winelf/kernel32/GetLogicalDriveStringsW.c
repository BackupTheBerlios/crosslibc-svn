#include "kernel32.h"
void _elfimplib_GetLogicalDriveStringsW() asm("GetLogicalDriveStringsW");
void *_imp__GetLogicalDriveStringsW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLogicalDriveStringsW() {
load_dll_kernel32();
_imp__GetLogicalDriveStringsW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDriveStringsW");
}
void _elfimplib_GetLogicalDriveStringsW() {
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDriveStringsW));
}

