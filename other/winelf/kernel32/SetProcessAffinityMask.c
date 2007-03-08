#include "kernel32.h"
void _elfimplib_SetProcessAffinityMask() asm("SetProcessAffinityMask");
void *_imp__SetProcessAffinityMask = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessAffinityMask() {
load_dll_kernel32();
_imp__SetProcessAffinityMask = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessAffinityMask");
}
void _elfimplib_SetProcessAffinityMask() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessAffinityMask));
}

