#include "kernel32.h"
void _elfimplib_HeapQueryInformation() asm("HeapQueryInformation");
void *_imp__HeapQueryInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapQueryInformation() {
load_dll_kernel32();
_imp__HeapQueryInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapQueryInformation");
}
void _elfimplib_HeapQueryInformation() {
asm("leave\njmp *%0" : : "r"(_imp__HeapQueryInformation));
}

