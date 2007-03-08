#include "kernel32.h"
void _elfimplib_SetCriticalSectionSpinCount() asm("SetCriticalSectionSpinCount");
void *_imp__SetCriticalSectionSpinCount = NULL;
__attribute__((constructor)) void _elfimplib_init_SetCriticalSectionSpinCount() {
load_dll_kernel32();
_imp__SetCriticalSectionSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "SetCriticalSectionSpinCount");
}
void _elfimplib_SetCriticalSectionSpinCount() {
asm("leave\njmp *%0" : : "r"(_imp__SetCriticalSectionSpinCount));
}

