#include "kernel32.h"
void _elfimplib_BaseDumpAppcompatCache() asm("BaseDumpAppcompatCache");
void *_imp__BaseDumpAppcompatCache = NULL;
__attribute__((constructor)) void _elfimplib_init_BaseDumpAppcompatCache() {
load_dll_kernel32();
_imp__BaseDumpAppcompatCache = (void *) _elf_GetProcAddress(_dll_kernel32, "BaseDumpAppcompatCache");
}
void _elfimplib_BaseDumpAppcompatCache() {
asm("leave\njmp *%0" : : "r"(_imp__BaseDumpAppcompatCache));
}

