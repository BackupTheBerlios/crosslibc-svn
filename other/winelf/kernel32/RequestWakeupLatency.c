#include "kernel32.h"
void _elfimplib_RequestWakeupLatency() asm("RequestWakeupLatency");
void *_imp__RequestWakeupLatency = NULL;
__attribute__((constructor)) void _elfimplib_init_RequestWakeupLatency() {
load_dll_kernel32();
_imp__RequestWakeupLatency = (void *) _elf_GetProcAddress(_dll_kernel32, "RequestWakeupLatency");
}
void _elfimplib_RequestWakeupLatency() {
asm("leave\njmp *%0" : : "r"(_imp__RequestWakeupLatency));
}

