#include "kernel32.h"
void _elfimplib_ReleaseSemaphore() asm("ReleaseSemaphore");
void *_imp__ReleaseSemaphore = NULL;
__attribute__((constructor)) void _elfimplib_init_ReleaseSemaphore() {
load_dll_kernel32();
_imp__ReleaseSemaphore = (void *) _elf_GetProcAddress(_dll_kernel32, "ReleaseSemaphore");
}
void _elfimplib_ReleaseSemaphore() {
asm("leave\njmp *%0" : : "r"(_imp__ReleaseSemaphore));
}

