#include "kernel32.h"
void _elfimplib_FindFirstVolumeMountPointA() asm("FindFirstVolumeMountPointA");
void *_imp__FindFirstVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeMountPointA() {
load_dll_kernel32();
_imp__FindFirstVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointA");
}
void _elfimplib_FindFirstVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeMountPointA));
}

