#include "kernel32.h"
void _elfimplib_DebugBreakProcess() asm("DebugBreakProcess");
void *_imp__DebugBreakProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugBreakProcess() {
load_dll_kernel32();
_imp__DebugBreakProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreakProcess");
}
void _elfimplib_DebugBreakProcess() {
asm("leave\njmp *%0" : : "r"(_imp__DebugBreakProcess));
}

