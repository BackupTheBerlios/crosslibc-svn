#include "kernel32.h"
void _elfimplib_GetVolumePathNameW() asm("GetVolumePathNameW");
void *_imp__GetVolumePathNameW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNameW() {
load_dll_kernel32();
_imp__GetVolumePathNameW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameW");
}
void _elfimplib_GetVolumePathNameW() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNameW));
}

