#include "kernel32.h"
void _elfimplib_SetThreadAffinityMask() asm("SetThreadAffinityMask");
void *_imp__SetThreadAffinityMask = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadAffinityMask() {
load_dll_kernel32();
_imp__SetThreadAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadAffinityMask");
}
void _elfimplib_SetThreadAffinityMask() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadAffinityMask));
}

