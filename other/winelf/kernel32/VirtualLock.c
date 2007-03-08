#include "kernel32.h"
void _elfimplib_VirtualLock() asm("VirtualLock");
void *_imp__VirtualLock = NULL;
__attribute__((constructor)) void _elfimplib_init_VirtualLock() {
load_dll_kernel32();
_imp__VirtualLock = (void *) _elf_GetProcAddress(_dll_kernel32, "VirtualLock");
}
void _elfimplib_VirtualLock() {
asm("leave\njmp *%0" : : "r"(_imp__VirtualLock));
}

