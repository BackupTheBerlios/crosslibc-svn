#include "kernel32.h"
void _elfimplib_CreateFileA() asm("CreateFileA");
void *_imp__CreateFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_CreateFileA() {
load_dll_kernel32();
_imp__CreateFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CreateFileA");
}
void _elfimplib_CreateFileA() {
asm("leave\njmp *%0" : : "r"(_imp__CreateFileA));
}

