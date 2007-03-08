#include "kernel32.h"
void _elfimplib_LoadLibraryExW() asm("LoadLibraryExW");
void *_imp__LoadLibraryExW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryExW() {
load_dll_kernel32();
_imp__LoadLibraryExW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryExW");
}
void _elfimplib_LoadLibraryExW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryExW));
}

