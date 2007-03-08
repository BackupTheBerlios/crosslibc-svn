#include "kernel32.h"
void _elfimplib_LocalFree() asm("LocalFree");
void *_imp__LocalFree = NULL;
__attribute__((constructor)) void _elfimplib_init_LocalFree() {
load_dll_kernel32();
_imp__LocalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "LocalFree");
}
void _elfimplib_LocalFree() {
asm("leave\njmp *%0" : : "r"(_imp__LocalFree));
}

