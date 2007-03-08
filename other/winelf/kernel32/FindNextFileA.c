#include "kernel32.h"
void _elfimplib_FindNextFileA() asm("FindNextFileA");
void *_imp__FindNextFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_FindNextFileA() {
load_dll_kernel32();
_imp__FindNextFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "FindNextFileA");
}
void _elfimplib_FindNextFileA() {
asm("leave\njmp *%0" : : "r"(_imp__FindNextFileA));
}

