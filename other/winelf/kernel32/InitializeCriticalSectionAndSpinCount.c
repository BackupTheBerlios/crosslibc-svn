#include "kernel32.h"
void _elfimplib_InitializeCriticalSectionAndSpinCount() asm("InitializeCriticalSectionAndSpinCount");
void *_imp__InitializeCriticalSectionAndSpinCount = NULL;
__attribute__((constructor)) void _elfimplib_init_InitializeCriticalSectionAndSpinCount() {
load_dll_kernel32();
_imp__InitializeCriticalSectionAndSpinCount = (void *) _elf_GetProcAddress(_dll_kernel32, "InitializeCriticalSectionAndSpinCount");
}
void _elfimplib_InitializeCriticalSectionAndSpinCount() {
asm("leave\njmp *%0" : : "r"(_imp__InitializeCriticalSectionAndSpinCount));
}

