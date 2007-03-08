#include "kernel32.h"
void _elfimplib_CopyFileW() asm("CopyFileW");
void *_imp__CopyFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_CopyFileW() {
load_dll_kernel32();
_imp__CopyFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "CopyFileW");
}
void _elfimplib_CopyFileW() {
asm("leave\njmp *%0" : : "r"(_imp__CopyFileW));
}

