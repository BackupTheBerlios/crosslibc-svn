#include "kernel32.h"
void _elfimplib_GetDriveTypeW() asm("GetDriveTypeW");
void *_imp__GetDriveTypeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDriveTypeW() {
load_dll_kernel32();
_imp__GetDriveTypeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDriveTypeW");
}
void _elfimplib_GetDriveTypeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetDriveTypeW));
}

