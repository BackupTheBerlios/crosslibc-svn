#include "kernel32.h"
void _elfimplib_FindResourceExW() asm("FindResourceExW");
void *_imp__FindResourceExW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceExW() {
load_dll_kernel32();
_imp__FindResourceExW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceExW");
}
void _elfimplib_FindResourceExW() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceExW));
}

