#include "kernel32.h"
void _elfimplib_BaseFlushAppcompatCache() asm("BaseFlushAppcompatCache");
void *_imp__BaseFlushAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseFlushAppcompatCache() {
load_dll_kernel32();
_imp__BaseFlushAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseFlushAppcompatCache");
}
void _elfimplib_BaseFlushAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseFlushAppcompatCache));
}

