#include "kernel32.h"
void _elfimplib_GetDriveTypeA() asm("GetDriveTypeA");
void *_imp__GetDriveTypeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDriveTypeA() {
load_dll_kernel32();
_imp__GetDriveTypeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeA");
}
void _elfimplib_GetDriveTypeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetDriveTypeA));
}

