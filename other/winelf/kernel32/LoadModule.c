#include "kernel32.h"
void _elfimplib_LoadModule() asm("LoadModule");
void *_imp__LoadModule = NULL;
__attribute__((constructor)) void _elfimplib_init_LoadModule() {
load_dll_kernel32();
_imp__LoadModule = (void *) _elf_GetProcAddress(_dll_kernel32, "LoadModule");
}
void _elfimplib_LoadModule() {
asm("leave\njmp *%0" : : "r"(_imp__LoadModule));
}

