#include "kernel32.h"
void _elfimplib_SetFileApisToANSI() asm("SetFileApisToANSI");
void *_imp__SetFileApisToANSI = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileApisToANSI() {
load_dll_kernel32();
_imp__SetFileApisToANSI = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToANSI");
}
void _elfimplib_SetFileApisToANSI() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileApisToANSI));
}

