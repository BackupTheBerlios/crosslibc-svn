#include "kernel32.h"
void _elfimplib_SetTermsrvAppInstallMode() asm("SetTermsrvAppInstallMode");
void *_imp__SetTermsrvAppInstallMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetTermsrvAppInstallMode() {
load_dll_kernel32();
_imp__SetTermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetTermsrvAppInstallMode");
}
void _elfimplib_SetTermsrvAppInstallMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetTermsrvAppInstallMode));
}

