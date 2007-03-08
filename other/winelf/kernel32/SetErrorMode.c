#include "kernel32.h"
void _elfimplib_SetErrorMode() asm("SetErrorMode");
void *_imp__SetErrorMode = NULL;
__attribute__((constructor)) void _elfimplib_init_SetErrorMode() {
load_dll_kernel32();
_imp__SetErrorMode = (void *) _elf_GetProcAddress(_dll_kernel32, "SetErrorMode");
}
void _elfimplib_SetErrorMode() {
asm("leave\njmp *%0" : : "r"(_imp__SetErrorMode));
}

