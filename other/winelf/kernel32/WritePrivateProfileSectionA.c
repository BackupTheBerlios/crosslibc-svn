#include "kernel32.h"
void _elfimplib_WritePrivateProfileSectionA() asm("WritePrivateProfileSectionA");
void *_imp__WritePrivateProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileSectionA() {
load_dll_kernel32();
_imp__WritePrivateProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionA");
}
void _elfimplib_WritePrivateProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileSectionA));
}

