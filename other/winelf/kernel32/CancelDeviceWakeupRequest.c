#include "kernel32.h"
void _elfimplib_CancelDeviceWakeupRequest() asm("CancelDeviceWakeupRequest");
void *_imp__CancelDeviceWakeupRequest = NULL;
__attribute__((constructor)) void _elfimplib_init_CancelDeviceWakeupRequest() {
load_dll_kernel32();
_imp__CancelDeviceWakeupRequest = (void *) _elf_GetProcAddress(_dll_kernel32, "CancelDeviceWakeupRequest");
}
void _elfimplib_CancelDeviceWakeupRequest() {
asm("leave\njmp *%0" : : "r"(_imp__CancelDeviceWakeupRequest));
}

