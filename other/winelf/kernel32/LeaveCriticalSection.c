#include "kernel32.h"
void _elfimplib_LeaveCriticalSection() asm("LeaveCriticalSection");
void *_imp__LeaveCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_LeaveCriticalSection() {
load_dll_kernel32();
_imp__LeaveCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "LeaveCriticalSection");
}
void _elfimplib_LeaveCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__LeaveCriticalSection));
}

