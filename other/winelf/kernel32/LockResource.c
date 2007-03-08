#include "kernel32.h"
void _elfimplib_LockResource() asm("LockResource");
void *_imp__LockResource = NULL;
__attribute__((constructor)) void _elfimplib_init_LockResource() {
load_dll_kernel32();
_imp__LockResource = (void *) _elf_GetProcAddress(_dll_kernel32, "LockResource");
}
void _elfimplib_LockResource() {
asm("leave\njmp *%0" : : "r"(_imp__LockResource));
}

