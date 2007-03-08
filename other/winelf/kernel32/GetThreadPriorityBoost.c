#include "kernel32.h"
void _elfimplib_GetThreadPriorityBoost() asm("GetThreadPriorityBoost");
void *_imp__GetThreadPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_GetThreadPriorityBoost() {
load_dll_kernel32();
_imp__GetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetThreadPriorityBoost");
}
void _elfimplib_GetThreadPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__GetThreadPriorityBoost));
}

