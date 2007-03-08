#include "kernel32.h"
void _elfimplib_EnterCriticalSection() asm("EnterCriticalSection");
void *_imp__EnterCriticalSection = NULL;
__attribute__((constructor)) void _elfimplib_init_EnterCriticalSection() {
load_dll_kernel32();
_imp__EnterCriticalSection = (void *) _elf_GetProcAddress(_dll_kernel32, "EnterCriticalSection");
}
void _elfimplib_EnterCriticalSection() {
asm("leave\njmp *%0" : : "r"(_imp__EnterCriticalSection));
}

