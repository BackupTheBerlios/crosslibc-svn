#include "kernel32.h"
void _elfimplib_SetThreadPriorityBoost() asm("SetThreadPriorityBoost");
void *_imp__SetThreadPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_SetThreadPriorityBoost() {
load_dll_kernel32();
_imp__SetThreadPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetThreadPriorityBoost");
}
void _elfimplib_SetThreadPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__SetThreadPriorityBoost));
}

