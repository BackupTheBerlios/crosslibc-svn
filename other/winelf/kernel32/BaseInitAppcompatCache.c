#include "kernel32.h"
void _elfimplib_BaseInitAppcompatCache() asm("BaseInitAppcompatCache");
void *_imp__BaseInitAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseInitAppcompatCache() {
load_dll_kernel32();
_imp__BaseInitAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCache");
}
void _elfimplib_BaseInitAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseInitAppcompatCache));
}

