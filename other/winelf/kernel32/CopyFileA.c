#include "kernel32.h"
void _elfimplib_CopyFileA() asm("CopyFileA");
void *_imp__CopyFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileA() {
load_dll_kernel32();
_imp__CopyFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileA");
}
void _elfimplib_CopyFileA() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileA));
}

