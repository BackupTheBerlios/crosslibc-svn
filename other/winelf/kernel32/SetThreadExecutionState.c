#include "kernel32.h"
void _elfimplib_SetThreadExecutionState() asm("SetThreadExecutionState");
void *_imp__SetThreadExecutionState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadExecutionState() {
load_dll_kernel32();
_imp__SetThreadExecutionState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadExecutionState");
}
void _elfimplib_SetThreadExecutionState() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadExecutionState));
}

