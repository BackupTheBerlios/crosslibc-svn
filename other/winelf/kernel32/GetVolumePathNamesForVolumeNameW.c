#include "kernel32.h"
void _elfimplib_GetVolumePathNamesForVolumeNameW() asm("GetVolumePathNamesForVolumeNameW");
void *_imp__GetVolumePathNamesForVolumeNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNamesForVolumeNameW() {
load_dll_kernel32();
_imp__GetVolumePathNamesForVolumeNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameW");
}
void _elfimplib_GetVolumePathNamesForVolumeNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNamesForVolumeNameW));
}

