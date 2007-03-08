#include "kernel32.h"
void _elfimplib_LoadLibraryA() asm("LoadLibraryA");
void *_imp__LoadLibraryA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryA() {
load_dll_kernel32();
_imp__LoadLibraryA = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryA");
}
void _elfimplib_LoadLibraryA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryA));
}

