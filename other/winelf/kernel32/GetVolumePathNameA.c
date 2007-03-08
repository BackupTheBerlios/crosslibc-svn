#include "kernel32.h"
void _elfimplib_GetVolumePathNameA() asm("GetVolumePathNameA");
void *_imp__GetVolumePathNameA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetVolumePathNameA() {
load_dll_kernel32();
_imp__GetVolumePathNameA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetVolumePathNameA");
}
void _elfimplib_GetVolumePathNameA() {
asm("leave\njmp *%0" : : "r"(_imp__GetVolumePathNameA));
}

