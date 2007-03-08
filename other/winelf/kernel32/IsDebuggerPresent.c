#include "kernel32.h"
void _elfimplib_IsDebuggerPresent() asm("IsDebuggerPresent");
void *_imp__IsDebuggerPresent = NULL;
__attribute__((constructor)) void _elfimplib_init_IsDebuggerPresent() {
load_dll_kernel32();
_imp__IsDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "IsDebuggerPresent");
}
void _elfimplib_IsDebuggerPresent() {
asm("leave\njmp *%0" : : "r"(_imp__IsDebuggerPresent));
}

