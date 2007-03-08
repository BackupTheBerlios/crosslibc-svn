#include "kernel32.h"
void _elfimplib_FreeUserPhysicalPages() asm("FreeUserPhysicalPages");
void *_imp__FreeUserPhysicalPages = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeUserPhysicalPages() {
load_dll_kernel32();
_imp__FreeUserPhysicalPages = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeUserPhysicalPages");
}
void _elfimplib_FreeUserPhysicalPages() {
asm("leave\njmp *%0" : : "r"(_imp__FreeUserPhysicalPages));
}

