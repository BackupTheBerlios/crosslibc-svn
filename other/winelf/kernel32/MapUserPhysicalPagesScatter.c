#include "kernel32.h"
void _elfimplib_MapUserPhysicalPagesScatter() asm("MapUserPhysicalPagesScatter");
void *_imp__MapUserPhysicalPagesScatter = NULL;
__attribute__((constructor)) void _elfimplib_init_MapUserPhysicalPagesScatter() {
load_dll_kernel32();
_imp__MapUserPhysicalPagesScatter = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPagesScatter");
}
void _elfimplib_MapUserPhysicalPagesScatter() {
asm("leave\njmp *%0" : : "r"(_imp__MapUserPhysicalPagesScatter));
}

