#include "kernel32.h"
void _elfimplib_SetFileTime() asm("SetFileTime");
void *_imp__SetFileTime = NULL;
__attribute__((constructor)) void _elfimplib_init_SetFileTime() {
load_dll_kernel32();
_imp__SetFileTime = (void *) _elf_GetProcAddress(_dll_kernel32, "SetFileTime");
}
void _elfimplib_SetFileTime() {
asm("leave\njmp *%0" : : "r"(_imp__SetFileTime));
}

