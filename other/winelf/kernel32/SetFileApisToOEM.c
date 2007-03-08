#include "kernel32.h"
void _elfimplib_SetFileApisToOEM() asm("SetFileApisToOEM");
void *_imp__SetFileApisToOEM = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileApisToOEM() {
load_dll_kernel32();
_imp__SetFileApisToOEM = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileApisToOEM");
}
void _elfimplib_SetFileApisToOEM() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileApisToOEM));
}

