#include "kernel32.h"
void _elfimplib_HeapSetInformation() asm("HeapSetInformation");
void *_imp__HeapSetInformation = NULL;
__attribute__((constructor)) void _elfimplib_init_HeapSetInformation() {
load_dll_kernel32();
_imp__HeapSetInformation = (void *) _elf_GetProcAddress(_dll_kernel32, "HeapSetInformation");
}
void _elfimplib_HeapSetInformation() {
asm("leave\njmp *%0" : : "r"(_imp__HeapSetInformation));
}

