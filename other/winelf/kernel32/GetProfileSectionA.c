#include "kernel32.h"
void _elfimplib_GetProfileSectionA() asm("GetProfileSectionA");
void *_imp__GetProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileSectionA() {
load_dll_kernel32();
_imp__GetProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionA");
}
void _elfimplib_GetProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileSectionA));
}

