#include "kernel32.h"
void _elfimplib_GetLogicalDrives() asm("GetLogicalDrives");
void *_imp__GetLogicalDrives = NULL;
__attribute__((constructor)) void _elfimplib_init_GetLogicalDrives() {
load_dll_kernel32();
_imp__GetLogicalDrives = (void *) _elf_GetProcAddress(_dll_kernel32, "GetLogicalDrives");
}
void _elfimplib_GetLogicalDrives() {
asm("leave\njmp *%0" : : "r"(_imp__GetLogicalDrives));
}
