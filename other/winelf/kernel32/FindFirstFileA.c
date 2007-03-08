#include "kernel32.h"
void _elfimplib_FindFirstFileA() asm("FindFirstFileA");
void *_imp__FindFirstFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindFirstFileA() {
load_dll_kernel32();
_imp__FindFirstFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindFirstFileA");
}
void _elfimplib_FindFirstFileA() {
asm("leave\njmp *%0" : : "r"(_imp__FindFirstFileA));
}

