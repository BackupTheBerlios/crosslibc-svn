#include "kernel32.h"
void _elfimplib_GetPrivateProfileSectionNamesW() asm("GetPrivateProfileSectionNamesW");
void *_imp__GetPrivateProfileSectionNamesW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionNamesW() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionNamesW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionNamesW");
}
void _elfimplib_GetPrivateProfileSectionNamesW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionNamesW));
}

