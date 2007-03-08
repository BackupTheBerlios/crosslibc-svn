#include "kernel32.h"
void _elfimplib_QueryPerformanceCounter() asm("QueryPerformanceCounter");
void *_imp__QueryPerformanceCounter = NULL;
__attribute__((constructor)) void _elfimplib_init_QueryPerformanceCounter() {
load_dll_kernel32();
_imp__QueryPerformanceCounter = (void *) _elf_GetProcAddress(_dll_kernel32, "QueryPerformanceCounter");
}
void _elfimplib_QueryPerformanceCounter() {
asm("leave\njmp *%0" : : "r"(_imp__QueryPerformanceCounter));
}

