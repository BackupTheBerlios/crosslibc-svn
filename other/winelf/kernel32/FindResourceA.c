#include "kernel32.h"
void _elfimplib_FindResourceA() asm("FindResourceA");
void *_imp__FindResourceA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceA() {
load_dll_kernel32();
_imp__FindResourceA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceA");
}
void _elfimplib_FindResourceA() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceA));
}

