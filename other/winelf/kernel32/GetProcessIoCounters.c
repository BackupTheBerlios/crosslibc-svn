#include "kernel32.h"
void _elfimplib_GetProcessIoCounters() asm("GetProcessIoCounters");
void *_imp__GetProcessIoCounters = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessIoCounters() {
load_dll_kernel32();
_imp__GetProcessIoCounters = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessIoCounters");
}
void _elfimplib_GetProcessIoCounters() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessIoCounters));
}

