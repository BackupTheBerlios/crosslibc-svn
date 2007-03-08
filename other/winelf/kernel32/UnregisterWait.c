#include "kernel32.h"
void _elfimplib_UnregisterWait() asm("UnregisterWait");
void *_imp__UnregisterWait = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterWait() {
load_dll_kernel32();
_imp__UnregisterWait = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWait");
}
void _elfimplib_UnregisterWait() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterWait));
}

