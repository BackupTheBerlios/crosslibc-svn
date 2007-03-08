#include "kernel32.h"
void _elfimplib_GetVolumePathNamesForVolumeNameA() asm("GetVolumePathNamesForVolumeNameA");
void *_imp__GetVolumePathNamesForVolumeNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNamesForVolumeNameA() {
load_dll_kernel32();
_imp__GetVolumePathNamesForVolumeNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNamesForVolumeNameA");
}
void _elfimplib_GetVolumePathNamesForVolumeNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNamesForVolumeNameA));
}

