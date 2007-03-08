#include "kernel32.h"
void _elfimplib_DeleteVolumeMountPointW() asm("DeleteVolumeMountPointW");
void *_imp__DeleteVolumeMountPointW = NULL;
__attribute__((constructor)) void _elfimplib_init_DeleteVolumeMountPointW() {
load_dll_kernel32();
_imp__DeleteVolumeMountPointW = (void *) _elf_GetProcAddress(_dll_kernel32, "DeleteVolumeMountPointW");
}
void _elfimplib_DeleteVolumeMountPointW() {
asm("leave\njmp *%0" : : "r"(_imp__DeleteVolumeMountPointW));
}

