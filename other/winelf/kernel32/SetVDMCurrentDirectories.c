#include "kernel32.h"
void _elfimplib_SetVDMCurrentDirectories() asm("SetVDMCurrentDirectories");
void *_imp__SetVDMCurrentDirectories = NULL;
__attribute__((constructor)) void _elfimplib_init_SetVDMCurrentDirectories() {
load_dll_kernel32();
_imp__SetVDMCurrentDirectories = (void *) _elf_GetProcAddress(_dll_kernel32, "SetVDMCurrentDirectories");
}
void _elfimplib_SetVDMCurrentDirectories() {
asm("leave\njmp *%0" : : "r"(_imp__SetVDMCurrentDirectories));
}

