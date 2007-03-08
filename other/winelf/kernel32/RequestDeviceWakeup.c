#include "kernel32.h"
void _elfimplib_RequestDeviceWakeup() asm("RequestDeviceWakeup");
void *_imp__RequestDeviceWakeup = NULL;
__attribute__((constructor)) void _elfimplib_init_RequestDeviceWakeup() {
load_dll_kernel32();
_imp__RequestDeviceWakeup = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestDeviceWakeup");
}
void _elfimplib_RequestDeviceWakeup() {
asm("leave\njmp *%0" : : "r"(_imp__RequestDeviceWakeup));
}

