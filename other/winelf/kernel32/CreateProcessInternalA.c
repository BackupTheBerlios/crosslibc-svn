#include "kernel32.h"
void _elfimplib_CreateProcessInternalA() asm("CreateProcessInternalA");
void *_imp__CreateProcessInternalA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessInternalA() {
load_dll_kernel32();
_imp__CreateProcessInternalA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalA");
}
void _elfimplib_CreateProcessInternalA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessInternalA));
}

