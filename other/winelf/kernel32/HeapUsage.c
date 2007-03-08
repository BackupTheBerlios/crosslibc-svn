#include "kernel32.h"
void _elfimplib_HeapUsage() asm("HeapUsage");
void *_imp__HeapUsage = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapUsage() {
load_dll_kernel32();
_imp__HeapUsage = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapUsage");
}
void _elfimplib_HeapUsage() {
asm("leave\njmp *%0" : : "r"(_imp__HeapUsage));
}

