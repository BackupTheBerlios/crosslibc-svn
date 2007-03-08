#include "kernel32.h"
void _elfimplib_UnregisterWaitEx() asm("UnregisterWaitEx");
void *_imp__UnregisterWaitEx = NULL;
__attribute__((constructor)) void _elfimplib_init_UnregisterWaitEx() {
load_dll_kernel32();
_imp__UnregisterWaitEx = (void *) _elf_GetProcAddress(_dll_kernel32, "UnregisterWaitEx");
}
void _elfimplib_UnregisterWaitEx() {
asm("leave\njmp *%0" : : "r"(_imp__UnregisterWaitEx));
}

