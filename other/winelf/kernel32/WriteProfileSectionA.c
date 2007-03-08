#include "kernel32.h"
void _elfimplib_WriteProfileSectionA() asm("WriteProfileSectionA");
void *_imp__WriteProfileSectionA = NULL;
__attribute__((constructor)) void _elfimplib_init_WriteProfileSectionA() {
load_dll_kernel32();
_imp__WriteProfileSectionA = (void *) _elf_GetProcAddress(_dll_kernel32, "WriteProfileSectionA");
}
void _elfimplib_WriteProfileSectionA() {
asm("leave\njmp *%0" : : "r"(_imp__WriteProfileSectionA));
}

