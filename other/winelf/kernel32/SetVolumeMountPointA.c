#include "kernel32.h"
void _elfimplib_SetVolumeMountPointA() asm("SetVolumeMountPointA");
void *_imp__SetVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeMountPointA() {
load_dll_kernel32();
_imp__SetVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointA");
}
void _elfimplib_SetVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeMountPointA));
}

