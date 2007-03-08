#include "kernel32.h"
void _elfimplib_GetCurrentThreadId() asm("GetCurrentThreadId");
void *_imp__GetCurrentThreadId = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCurrentThreadId() {
load_dll_kernel32();
_imp__GetCurrentThreadId = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCurrentThreadId");
}
void _elfimplib_GetCurrentThreadId() {
asm("leave\njmp *%0" : : "r"(_imp__GetCurrentThreadId));
}

