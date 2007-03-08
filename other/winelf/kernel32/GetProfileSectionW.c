#include "kernel32.h"
void _elfimplib_GetProfileSectionW() asm("GetProfileSectionW");
void *_imp__GetProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProfileSectionW() {
load_dll_kernel32();
_imp__GetProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProfileSectionW");
}
void _elfimplib_GetProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__GetProfileSectionW));
}

