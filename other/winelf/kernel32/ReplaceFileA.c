#include "kernel32.h"
void _elfimplib_ReplaceFileA() asm("ReplaceFileA");
void *_imp__ReplaceFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_ReplaceFileA() {
load_dll_kernel32();
_imp__ReplaceFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "ReplaceFileA");
}
void _elfimplib_ReplaceFileA() {
asm("leave\njmp *%0" : : "r"(_imp__ReplaceFileA));
}

