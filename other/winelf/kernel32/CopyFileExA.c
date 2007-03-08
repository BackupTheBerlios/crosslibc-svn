#include "kernel32.h"
void _elfimplib_CopyFileExA() asm("CopyFileExA");
void *_imp__CopyFileExA = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileExA() {
load_dll_kernel32();
_imp__CopyFileExA = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExA");
}
void _elfimplib_CopyFileExA() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileExA));
}

