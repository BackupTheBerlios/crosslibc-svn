#include "kernel32.h"
void _elfimplib_FindActCtxSectionStringW() asm("FindActCtxSectionStringW");
void *_imp__FindActCtxSectionStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindActCtxSectionStringW() {
load_dll_kernel32();
_imp__FindActCtxSectionStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringW");
}
void _elfimplib_FindActCtxSectionStringW() {
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionStringW));
}

