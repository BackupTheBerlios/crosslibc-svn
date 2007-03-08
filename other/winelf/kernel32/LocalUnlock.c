#include "kernel32.h"
void _elfimplib_LocalUnlock() asm("LocalUnlock");
void *_imp__LocalUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalUnlock() {
load_dll_kernel32();
_imp__LocalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalUnlock");
}
void _elfimplib_LocalUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__LocalUnlock));
}

