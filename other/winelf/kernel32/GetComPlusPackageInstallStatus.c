#include "kernel32.h"
void _elfimplib_GetComPlusPackageInstallStatus() asm("GetComPlusPackageInstallStatus");
void *_imp__GetComPlusPackageInstallStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_GetComPlusPackageInstallStatus() {
load_dll_kernel32();
_imp__GetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "GetComPlusPackageInstallStatus");
}
void _elfimplib_GetComPlusPackageInstallStatus() {
asm("leave\njmp *%0" : : "r"(_imp__GetComPlusPackageInstallStatus));
}

