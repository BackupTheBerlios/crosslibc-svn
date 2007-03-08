#include "kernel32.h"
void _elfimplib_GetProcessAffinityMask() asm("GetProcessAffinityMask");
void *_imp__GetProcessAffinityMask = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessAffinityMask() {
load_dll_kernel32();
_imp__GetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessAffinityMask");
}
void _elfimplib_GetProcessAffinityMask() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessAffinityMask));
}

