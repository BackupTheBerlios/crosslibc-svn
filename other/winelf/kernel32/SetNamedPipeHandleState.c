#include "kernel32.h"
void _elfimplib_SetNamedPipeHandleState() asm("SetNamedPipeHandleState");
void *_imp__SetNamedPipeHandleState = NULL;
__attribute__((constructor)) void _elfimplib_init_SetNamedPipeHandleState() {
load_dll_kernel32();
_imp__SetNamedPipeHandleState = (void *) _elf_GetProcAddress(_dll_kernel32, "SetNamedPipeHandleState");
}
void _elfimplib_SetNamedPipeHandleState() {
asm("leave\njmp *%0" : : "r"(_imp__SetNamedPipeHandleState));
}

