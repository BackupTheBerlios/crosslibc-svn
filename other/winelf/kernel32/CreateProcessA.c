#include "kernel32.h"
void _elfimplib_CreateProcessA() asm("CreateProcessA");
void *_imp__CreateProcessA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateProcessA() {
load_dll_kernel32();
_imp__CreateProcessA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateProcessA");
}
void _elfimplib_CreateProcessA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateProcessA));
}

