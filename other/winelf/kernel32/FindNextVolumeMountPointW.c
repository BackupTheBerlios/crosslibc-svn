#include "kernel32.h"
void _elfimplib_FindNextVolumeMountPointW() asm("FindNextVolumeMountPointW");
void *_imp__FindNextVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeMountPointW() {
load_dll_kernel32();
_imp__FindNextVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointW");
}
void _elfimplib_FindNextVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeMountPointW));
}

