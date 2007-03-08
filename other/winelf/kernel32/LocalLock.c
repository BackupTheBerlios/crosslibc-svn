#include "kernel32.h"
void _elfimplib_LocalLock() asm("LocalLock");
void *_imp__LocalLock = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalLock() {
load_dll_kernel32();
_imp__LocalLock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalLock");
}
void _elfimplib_LocalLock() {
asm("leave\njmp *%0" : : "r"(_imp__LocalLock));
}

