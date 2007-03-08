#include "kernel32.h"
void _elfimplib_GetVolumeInformationA() asm("GetVolumeInformationA");
void *_imp__GetVolumeInformationA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeInformationA() {
load_dll_kernel32();
_imp__GetVolumeInformationA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationA");
}
void _elfimplib_GetVolumeInformationA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeInformationA));
}

