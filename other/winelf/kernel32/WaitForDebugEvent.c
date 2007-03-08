#include "kernel32.h"
void _elfimplib_WaitForDebugEvent() asm("WaitForDebugEvent");
void *_imp__WaitForDebugEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_WaitForDebugEvent() {
load_dll_kernel32();
_imp__WaitForDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "WaitForDebugEvent");
}
void _elfimplib_WaitForDebugEvent() {
asm("leave\njmp *%0" : : "r"(_imp__WaitForDebugEvent));
}

