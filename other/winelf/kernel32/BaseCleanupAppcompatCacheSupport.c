#include "kernel32.h"
void _elfimplib_BaseCleanupAppcompatCacheSupport() asm("BaseCleanupAppcompatCacheSupport");
void *_imp__BaseCleanupAppcompatCacheSupport = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseCleanupAppcompatCacheSupport() {
load_dll_kernel32();
_imp__BaseCleanupAppcompatCacheSupport = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCacheSupport");
}
void _elfimplib_BaseCleanupAppcompatCacheSupport() {
asm("leave\njmp *%0" : : "r"(_imp__BaseCleanupAppcompatCacheSupport));
}

