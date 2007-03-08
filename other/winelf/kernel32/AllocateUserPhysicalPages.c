#include "kernel32.h"
void _elfimplib_AllocateUserPhysicalPages() asm("AllocateUserPhysicalPages");
void *_imp__AllocateUserPhysicalPages = NULL;
__attribute__((constructor)) void _elfimplib_init_AllocateUserPhysicalPages() {
load_dll_kernel32();
_imp__AllocateUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "AllocateUserPhysicalPages");
}
void _elfimplib_AllocateUserPhysicalPages() {
asm("leave\njmp *%0" : : "r"(_imp__AllocateUserPhysicalPages));
}

