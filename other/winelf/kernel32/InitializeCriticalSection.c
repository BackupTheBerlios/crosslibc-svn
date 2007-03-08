#include "kernel32.h"
void _elfimplib_InitializeCriticalSection() asm("InitializeCriticalSection");
void *_imp__InitializeCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeCriticalSection() {
load_dll_kernel32();
_imp__InitializeCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSection");
}
void _elfimplib_InitializeCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeCriticalSection));
}

