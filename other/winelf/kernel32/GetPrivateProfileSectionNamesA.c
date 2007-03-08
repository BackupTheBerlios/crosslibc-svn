#include "kernel32.h"
void _elfimplib_GetPrivateProfileSectionNamesA() asm("GetPrivateProfileSectionNamesA");
void *_imp__GetPrivateProfileSectionNamesA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionNamesA() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionNamesA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesA");
}
void _elfimplib_GetPrivateProfileSectionNamesA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionNamesA));
}

