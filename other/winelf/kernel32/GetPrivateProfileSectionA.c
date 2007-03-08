#include "kernel32.h"
void _elfimplib_GetPrivateProfileSectionA() asm("GetPrivateProfileSectionA");
void *_imp__GetPrivateProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionA() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionA");
}
void _elfimplib_GetPrivateProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionA));
}

