#include "kernel32.h"
void _elfimplib_CreateThread() asm("CreateThread");
void *_imp__CreateThread = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateThread() {
load_dll_kernel32();
_imp__CreateThread = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateThread");
}
void _elfimplib_CreateThread() {
asm("leave\njmp *%0" : : "r"(_imp__CreateThread));
}

