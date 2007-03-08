#include "kernel32.h"
void _elfimplib_CheckRemoteDebuggerPresent() asm("CheckRemoteDebuggerPresent");
void *_imp__CheckRemoteDebuggerPresent = NULL;
__attribute__((constructor)) void _elfimplib_init_CheckRemoteDebuggerPresent() {
load_dll_kernel32();
_imp__CheckRemoteDebuggerPresent = (void *) _elf_GetProcAddress(_dll_kernel32, "CheckRemoteDebuggerPresent");
}
void _elfimplib_CheckRemoteDebuggerPresent() {
asm("leave\njmp *%0" : : "r"(_imp__CheckRemoteDebuggerPresent));
}

