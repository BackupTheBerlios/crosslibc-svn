#include "kernel32.h"
void _elfimplib_GetCompressedFileSizeA() asm("GetCompressedFileSizeA");
void *_imp__GetCompressedFileSizeA = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCompressedFileSizeA() {
load_dll_kernel32();
_imp__GetCompressedFileSizeA = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeA");
}
void _elfimplib_GetCompressedFileSizeA() {
asm("leave\njmp *%0" : : "r"(_imp__GetCompressedFileSizeA));
}

