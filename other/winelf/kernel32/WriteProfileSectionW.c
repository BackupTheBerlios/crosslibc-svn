#include "kernel32.h"
void _elfimplib_WriteProfileSectionW() asm("WriteProfileSectionW");
void *_imp__WriteProfileSectionW = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileSectionW() {
load_dll_kernel32();
_imp__WriteProfileSectionW = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionW");
}
void _elfimplib_WriteProfileSectionW() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileSectionW));
}

