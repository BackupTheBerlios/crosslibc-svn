#include "kernel32.h"
void _elfimplib_GetVolumeNameForVolumeMountPointW() asm("GetVolumeNameForVolumeMountPointW");
void *_imp__GetVolumeNameForVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeNameForVolumeMountPointW() {
load_dll_kernel32();
_imp__GetVolumeNameForVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeNameForVolumeMountPointW");
}
void _elfimplib_GetVolumeNameForVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeNameForVolumeMountPointW));
}

