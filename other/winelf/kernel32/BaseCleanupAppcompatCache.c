#include "kernel32.h"
void _elfimplib_BaseCleanupAppcompatCache() asm("BaseCleanupAppcompatCache");
void *_imp__BaseCleanupAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseCleanupAppcompatCache() {
load_dll_kernel32();
_imp__BaseCleanupAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseCleanupAppcompatCache");
}
void _elfimplib_BaseCleanupAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseCleanupAppcompatCache));
}

