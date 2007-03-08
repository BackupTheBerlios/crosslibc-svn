#include "kernel32.h"
void _elfimplib_CreateProcessInternalW() asm("CreateProcessInternalW");
void *_imp__CreateProcessInternalW = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessInternalW() {
load_dll_kernel32();
_imp__CreateProcessInternalW = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessInternalW");
}
void _elfimplib_CreateProcessInternalW() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessInternalW));
}

