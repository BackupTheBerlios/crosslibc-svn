#include "kernel32.h"
void _elfimplib_FindFirstVolumeMountPointW() asm("FindFirstVolumeMountPointW");
void *_imp__FindFirstVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstVolumeMountPointW() {
load_dll_kernel32();
_imp__FindFirstVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstVolumeMountPointW");
}
void _elfimplib_FindFirstVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstVolumeMountPointW));
}

