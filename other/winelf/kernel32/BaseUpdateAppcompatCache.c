#include "kernel32.h"
void _elfimplib_BaseUpdateAppcompatCache() asm("BaseUpdateAppcompatCache");
void *_imp__BaseUpdateAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseUpdateAppcompatCache() {
load_dll_kernel32();
_imp__BaseUpdateAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseUpdateAppcompatCache");
}
void _elfimplib_BaseUpdateAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseUpdateAppcompatCache));
}

