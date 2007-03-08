#include "kernel32.h"
void _elfimplib_GetDevicePowerState() asm("GetDevicePowerState");
void *_imp__GetDevicePowerState = NULL;
__attribute__((constructor)) void _elfimplib_init_GetDevicePowerState() {
load_dll_kernel32();
_imp__GetDevicePowerState = (void *) _elf_GetProcAddress(_dll_kernel32, "GetDevicePowerState");
}
void _elfimplib_GetDevicePowerState() {
asm("leave\njmp *%0" : : "r"(_imp__GetDevicePowerState));
}

