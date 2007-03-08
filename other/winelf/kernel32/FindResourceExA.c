#include "kernel32.h"
void _elfimplib_FindResourceExA() asm("FindResourceExA");
void *_imp__FindResourceExA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceExA() {
load_dll_kernel32();
_imp__FindResourceExA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExA");
}
void _elfimplib_FindResourceExA() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceExA));
}

