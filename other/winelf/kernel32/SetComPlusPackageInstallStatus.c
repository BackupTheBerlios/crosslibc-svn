#include "kernel32.h"
void _elfimplib_SetComPlusPackageInstallStatus() asm("SetComPlusPackageInstallStatus");
void *_imp__SetComPlusPackageInstallStatus = NULL;
__attribute__((constructor)) void _elfimplib_init_SetComPlusPackageInstallStatus() {
load_dll_kernel32();
_imp__SetComPlusPackageInstallStatus = (void *) _elf_GetProcAddress(_dll_kernel32, "SetComPlusPackageInstallStatus");
}
void _elfimplib_SetComPlusPackageInstallStatus() {
asm("leave\njmp *%0" : : "r"(_imp__SetComPlusPackageInstallStatus));
}

