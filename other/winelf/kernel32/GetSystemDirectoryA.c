#include "kernel32.h"
void _elfimplib_GetSystemDirectoryA() asm("GetSystemDirectoryA");
void *_imp__GetSystemDirectoryA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDirectoryA() {
load_dll_kernel32();
_imp__GetSystemDirectoryA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryA");
}
void _elfimplib_GetSystemDirectoryA() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDirectoryA));
}

