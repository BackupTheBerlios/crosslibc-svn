#include "kernel32.h"
void _elfimplib_SetHandleCount() asm("SetHandleCount");
void *_imp__SetHandleCount = NULL;
__attribute__((constructor)) void _elfimplib_init_SetHandleCount() {
load_dll_kernel32();
_imp__SetHandleCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetHandleCount");
}
void _elfimplib_SetHandleCount() {
asm("leave\njmp *%0" : : "r"(_imp__SetHandleCount));
}

