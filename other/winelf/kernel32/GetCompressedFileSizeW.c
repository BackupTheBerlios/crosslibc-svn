#include "kernel32.h"
void _elfimplib_GetCompressedFileSizeW() asm("GetCompressedFileSizeW");
void *_imp__GetCompressedFileSizeW = NULL;
__attribute__((constructor)) void _elfimplib_init_GetCompressedFileSizeW() {
load_dll_kernel32();
_imp__GetCompressedFileSizeW = (void *) _elf_GetProcAddress(_dll_kernel32, "GetCompressedFileSizeW");
}
void _elfimplib_GetCompressedFileSizeW() {
asm("leave\njmp *%0" : : "r"(_imp__GetCompressedFileSizeW));
}

