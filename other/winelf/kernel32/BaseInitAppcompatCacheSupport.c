#include "kernel32.h"
void _elfimplib_BaseInitAppcompatCacheSupport() asm("BaseInitAppcompatCacheSupport");
void *_imp__BaseInitAppcompatCacheSupport = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseInitAppcompatCacheSupport() {
load_dll_kernel32();
_imp__BaseInitAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseInitAppcompatCacheSupport");
}
void _elfimplib_BaseInitAppcompatCacheSupport() {
asm("leave\njmp *%0" : : "r"(_imp__BaseInitAppcompatCacheSupport));
}

