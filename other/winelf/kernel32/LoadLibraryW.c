#include "kernel32.h"
void _elfimplib_LoadLibraryW() asm("LoadLibraryW");
void *_imp__LoadLibraryW = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadLibraryW() {
load_dll_kernel32();
_imp__LoadLibraryW = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadLibraryW");
}
void _elfimplib_LoadLibraryW() {
asm("leave\njmp *%0" : : "r"(_imp__LoadLibraryW));
}

