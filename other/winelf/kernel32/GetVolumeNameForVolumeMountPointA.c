#include "kernel32.h"
void _elfimplib_GetVolumeNameForVolumeMountPointA() asm("GetVolumeNameForVolumeMountPointA");
void *_imp__GetVolumeNameForVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeNameForVolumeMountPointA() {
load_dll_kernel32();
_imp__GetVolumeNameForVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointA");
}
void _elfimplib_GetVolumeNameForVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeNameForVolumeMountPointA));
}

