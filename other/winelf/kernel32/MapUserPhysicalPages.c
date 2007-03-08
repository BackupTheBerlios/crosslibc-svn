#include "kernel32.h"
void _elfimplib_MapUserPhysicalPages() asm("MapUserPhysicalPages");
void *_imp__MapUserPhysicalPages = NULL;
__attribute__((constructor)) void _elfimplib_init_MapUserPhysicalPages() {
load_dll_kernel32();
_imp__MapUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "MapUserPhysicalPages");
}
void _elfimplib_MapUserPhysicalPages() {
asm("leave\njmp *%0" : : "r"(_imp__MapUserPhysicalPages));
}

