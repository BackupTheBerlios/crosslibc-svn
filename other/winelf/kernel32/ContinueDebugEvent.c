#include "kernel32.h"
void _elfimplib_ContinueDebugEvent() asm("ContinueDebugEvent");
void *_imp__ContinueDebugEvent = NULL;
__attribute__((constructor)) void _elfimplib_init_ContinueDebugEvent() {
load_dll_kernel32();
_imp__ContinueDebugEvent = (void *) _elf_GetProcAddress(_dll_kernel32, "ContinueDebugEvent");
}
void _elfimplib_ContinueDebugEvent() {
asm("leave\njmp *%0" : : "r"(_imp__ContinueDebugEvent));
}

