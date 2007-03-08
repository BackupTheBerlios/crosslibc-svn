#include "kernel32.h"
void _elfimplib_WritePrivateProfileSectionW() asm("WritePrivateProfileSectionW");
void *_imp__WritePrivateProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_WritePrivateProfileSectionW() {
load_dll_kernel32();
_imp__WritePrivateProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WritePrivateProfileSectionW");
}
void _elfimplib_WritePrivateProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__WritePrivateProfileSectionW));
}

