#include "kernel32.h"
void _elfimplib_InterlockedExchange() asm("InterlockedExchange");
void *_imp__InterlockedExchange = NULL;
__attribute__((constructor)) void _elfimplib_init_InterlockedExchange() {
load_dll_kernel32();
_imp__InterlockedExchange = (void *) _elf_GetProcAddress(_dll_kernel32, "InterlockedExchange");
}
void _elfimplib_InterlockedExchange() {
asm("leave\njmp *%0" : : "r"(_imp__InterlockedExchange));
}

