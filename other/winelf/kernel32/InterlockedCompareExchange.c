#include "kernel32.h"
void _elfimplib_InterlockedCompareExchange() asm("InterlockedCompareExchange");
void *_imp__InterlockedCompareExchange = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedCompareExchange() {
load_dll_kernel32();
_imp__InterlockedCompareExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedCompareExchange");
}
void _elfimplib_InterlockedCompareExchange() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedCompareExchange));
}

