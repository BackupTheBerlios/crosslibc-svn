#include "kernel32.h"
void _elfimplib_DebugActiveProcess() asm("DebugActiveProcess");
void *_imp__DebugActiveProcess = NULL;
__attribute__((constructor)) void _elfimplib_init_DebugActiveProcess() {
load_dll_kernel32();
_imp__DebugActiveProcess = (void *) _elf_GetProcAddress(_dll_kernel32, "DebugActiveProcess");
}
void _elfimplib_DebugActiveProcess() {
asm("leave\njmp *%0" : : "r"(_imp__DebugActiveProcess));
}

