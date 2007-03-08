#include "kernel32.h"
void _elfimplib_VirtualUnlock() asm("VirtualUnlock");
void *_imp__VirtualUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualUnlock() {
load_dll_kernel32();
_imp__VirtualUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualUnlock");
}
void _elfimplib_VirtualUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualUnlock));
}

