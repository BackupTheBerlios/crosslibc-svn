#include "kernel32.h"
void _elfimplib_QueryPerformanceFrequency() asm("QueryPerformanceFrequency");
void *_imp__QueryPerformanceFrequency = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryPerformanceFrequency() {
load_dll_kernel32();
_imp__QueryPerformanceFrequency = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceFrequency");
}
void _elfimplib_QueryPerformanceFrequency() {
asm("leave\njmp *%0" : : "r"(_imp__QueryPerformanceFrequency));
}

