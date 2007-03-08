#include "kernel32.h"
void _elfimplib_GetProcessPriorityBoost() asm("GetProcessPriorityBoost");
void *_imp__GetProcessPriorityBoost = NULL;
__attribute__((constructor)) void _elfimplib_init_GetProcessPriorityBoost() {
load_dll_kernel32();
_imp__GetProcessPriorityBoost = (void *) _elf_GetProcAddress(_dll_kernel32, "GetProcessPriorityBoost");
}
void _elfimplib_GetProcessPriorityBoost() {
asm("leave\njmp *%0" : : "r"(_imp__GetProcessPriorityBoost));
}

