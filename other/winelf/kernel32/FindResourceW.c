#include "kernel32.h"
void _elfimplib_FindResourceW() asm("FindResourceW");
void *_imp__FindResourceW = NULL;
__attribute__((constructor)) void _elfimplib_init_FindResourceW() {
load_dll_kernel32();
_imp__FindResourceW = (void *) _elf_GetProcAddress(_dll_kernel32, "FindResourceW");
}
void _elfimplib_FindResourceW() {
asm("leave\njmp *%0" : : "r"(_imp__FindResourceW));
}

