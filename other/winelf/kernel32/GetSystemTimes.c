#include "kernel32.h"
void _elfimplib_GetSystemTimes() asm("GetSystemTimes");
void *_imp__GetSystemTimes = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemTimes() {
load_dll_kernel32();
_imp__GetSystemTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemTimes");
}
void _elfimplib_GetSystemTimes() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemTimes));
}

