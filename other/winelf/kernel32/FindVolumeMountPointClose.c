#include "kernel32.h"
void _elfimplib_FindVolumeMountPointClose() asm("FindVolumeMountPointClose");
void *_imp__FindVolumeMountPointClose = NULL;
__attribute__((constructor)) void _elfimplib_init_FindVolumeMountPointClose() {
load_dll_kernel32();
_imp__FindVolumeMountPointClose = (void *) _elf_GetProcAddress(_dll_kernel32, "FindVolumeMountPointClose");
}
void _elfimplib_FindVolumeMountPointClose() {
asm("leave\njmp *%0" : : "r"(_imp__FindVolumeMountPointClose));
}

