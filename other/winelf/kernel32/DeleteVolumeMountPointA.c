#include "kernel32.h"
void _elfimplib_DeleteVolumeMountPointA() asm("DeleteVolumeMountPointA");
void *_imp__DeleteVolumeMountPointA = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteVolumeMountPointA() {
load_dll_kernel32();
_imp__DeleteVolumeMountPointA = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointA");
}
void _elfimplib_DeleteVolumeMountPointA() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteVolumeMountPointA));
}

