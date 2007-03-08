#include "kernel32.h"
void _elfimplib_FindActCtxSectionGuid() asm("FindActCtxSectionGuid");
void *_imp__FindActCtxSectionGuid = NULL;
__attribute__((constructor)) void _elfimplib_init_FindActCtxSectionGuid() {
load_dll_kernel32();
_imp__FindActCtxSectionGuid = (void *) _elf_GetProcAddress(_dll_kernel32, "FindActCtxSectionGuid");
}
void _elfimplib_FindActCtxSectionGuid() {
asm("leave\njmp *%0" : : "r"(_imp__FindActCtxSectionGuid));
}

