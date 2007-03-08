#include "kernel32.h"
void _elfimplib_GetProcessTimes() asm("GetProcessTimes");
void *_imp__GetProcessTimes = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessTimes() {
load_dll_kernel32();
_imp__GetProcessTimes = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessTimes");
}
void _elfimplib_GetProcessTimes() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessTimes));
}

