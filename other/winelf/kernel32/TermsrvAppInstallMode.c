#include "kernel32.h"
void _elfimplib_TermsrvAppInstallMode() asm("TermsrvAppInstallMode");
void *_imp__TermsrvAppInstallMode = NULL;
__attribute__((constructor)) void _elfimplib_init_TermsrvAppInstallMode() {
load_dll_kernel32();
_imp__TermsrvAppInstallMode = (void *) _elf_GetProcAddress(_dll_kernel32, "TermsrvAppInstallMode");
}
void _elfimplib_TermsrvAppInstallMode() {
asm("leave\njmp *%0" : : "r"(_imp__TermsrvAppInstallMode));
}

