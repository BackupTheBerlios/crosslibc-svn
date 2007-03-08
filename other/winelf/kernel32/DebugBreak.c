#include "kernel32.h"
void _elfimplib_DebugBreak() asm("DebugBreak");
void *_imp__DebugBreak = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugBreak() {
load_dll_kernel32();
_imp__DebugBreak = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugBreak");
}
void _elfimplib_DebugBreak() {
asm("leave\njmp *%0" : : "r"(_imp__DebugBreak));
}

