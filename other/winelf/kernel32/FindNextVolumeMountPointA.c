#include "kernel32.h"
void _elfimplib_FindNextVolumeMountPointA() asm("FindNextVolumeMountPointA");
void *_imp__FindNextVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextVolumeMountPointA() {
load_dll_kernel32();
_imp__FindNextVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextVolumeMountPointA");
}
void _elfimplib_FindNextVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextVolumeMountPointA));
}

