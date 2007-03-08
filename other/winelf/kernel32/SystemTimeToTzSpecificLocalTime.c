#include "kernel32.h"
void _elfimplib_SystemTimeToTzSpecificLocalTime() asm("SystemTimeToTzSpecificLocalTime");
void *_imp__SystemTimeToTzSpecificLocalTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SystemTimeToTzSpecificLocalTime() {
load_dll_kernel32();
_imp__SystemTimeToTzSpecificLocalTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SystemTimeToTzSpecificLocalTime");
}
void _elfimplib_SystemTimeToTzSpecificLocalTime() {
asm("leave\njmp *%0" : : "r"(_imp__SystemTimeToTzSpecificLocalTime));
}

