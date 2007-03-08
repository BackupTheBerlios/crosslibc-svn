#include "kernel32.h"
void _elfimplib_GetVolumeInformationW() asm("GetVolumeInformationW");
void *_imp__GetVolumeInformationW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumeInformationW() {
load_dll_kernel32();
_imp__GetVolumeInformationW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumeInformationW");
}
void _elfimplib_GetVolumeInformationW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumeInformationW));
}

