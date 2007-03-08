#include "kernel32.h"
void _elfimplib_FindActCtxSectionStringA() asm("FindActCtxSectionStringA");
void *_imp__FindActCtxSectionStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindActCtxSectionStringA() {
load_dll_kernel32();
_imp__FindActCtxSectionStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionStringA");
}
void _elfimplib_FindActCtxSectionStringA() {
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionStringA));
}

