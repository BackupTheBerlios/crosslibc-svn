#include "kernel32.h"
void _elfimplib_SetProcessPriorityBoost() asm("SetProcessPriorityBoost");
void *_imp__SetProcessPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_SetProcessPriorityBoost() {
load_dll_kernel32();
_imp__SetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "SetProcessPriorityBoost");
}
void _elfimplib_SetProcessPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__SetProcessPriorityBoost));
}

