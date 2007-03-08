#include "kernel32.h"
void _elfimplib_LoadLibraryExA() asm("LoadLibraryExA");
void *_imp__LoadLibraryExA = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryExA() {
load_dll_kernel32();
_imp__LoadLibraryExA = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExA");
}
void _elfimplib_LoadLibraryExA() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryExA));
}

