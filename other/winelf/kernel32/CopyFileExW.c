#include "kernel32.h"
void _elfimplib_CopyFileExW() asm("CopyFileExW");
void *_imp__CopyFileExW = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileExW() {
load_dll_kernel32();
_imp__CopyFileExW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileExW");
}
void _elfimplib_CopyFileExW() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileExW));
}

