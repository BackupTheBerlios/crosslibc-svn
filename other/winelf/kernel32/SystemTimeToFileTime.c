#include "kernel32.h"
void _elfimplib_SystemTimeToFileTime() asm("SystemTimeToFileTime");
void *_imp__SystemTimeToFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SystemTimeToFileTime() {
load_dll_kernel32();
_imp__SystemTimeToFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToFileTime");
}
void _elfimplib_SystemTimeToFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__SystemTimeToFileTime));
}

