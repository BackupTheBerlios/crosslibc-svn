#include "kernel32.h"
void _elfimplib_GetSystemDirectoryW() asm("GetSystemDirectoryW");
void *_imp__GetSystemDirectoryW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetSystemDirectoryW() {
load_dll_kernel32();
_imp__GetSystemDirectoryW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetSystemDirectoryW");
}
void _elfimplib_GetSystemDirectoryW() {
asm("leave\njmp *%0" : : "r"(_imp__GetSystemDirectoryW));
}

