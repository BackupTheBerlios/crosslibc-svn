#include "kernel32.h"
void _elfimplib_GetPrivateProfileSectionW() asm("GetPrivateProfileSectionW");
void *_imp__GetPrivateProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetPrivateProfileSectionW() {
load_dll_kernel32();
_imp__GetPrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetPrivateProfileSectionW");
}
void _elfimplib_GetPrivateProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__GetPrivateProfileSectionW));
}

