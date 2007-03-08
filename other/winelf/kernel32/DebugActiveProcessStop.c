#include "kernel32.h"
void _elfimplib_DebugActiveProcessStop() asm("DebugActiveProcessStop");
void *_imp__DebugActiveProcessStop = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugActiveProcessStop() {
load_dll_kernel32();
_imp__DebugActiveProcessStop = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcessStop");
}
void _elfimplib_DebugActiveProcessStop() {
asm("leave\njmp *%0" : : "r"(_imp__DebugActiveProcessStop));
}

