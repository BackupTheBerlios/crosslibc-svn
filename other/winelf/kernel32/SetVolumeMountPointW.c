#include "kernel32.h"
void _elfimplib_SetVolumeMountPointW() asm("SetVolumeMountPointW");
void *_imp__SetVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVolumeMountPointW() {
load_dll_kernel32();
_imp__SetVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVolumeMountPointW");
}
void _elfimplib_SetVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__SetVolumeMountPointW));
}

