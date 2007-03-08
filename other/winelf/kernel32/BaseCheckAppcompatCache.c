#include "kernel32.h"
void _elfimplib_BaseCheckAppcompatCache() asm("BaseCheckAppcompatCache");
void *_imp__BaseCheckAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseCheckAppcompatCache() {
load_dll_kernel32();
_imp__BaseCheckAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCheckAppcompatCache");
}
void _elfimplib_BaseCheckAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseCheckAppcompatCache));
}

