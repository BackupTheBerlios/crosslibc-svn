#include "kernel32.h"
void _elfimplib_LZStart() asm("LZStart");
void *_imp__LZStart = NULL;
__attribute__((constructor)) void _elfimplib_init_LZStart() {
load_dll_kernel32();
_imp__LZStart = (void *) _elf_GetProcAddress(_dll_kernel32, "LZStart");
}
void _elfimplib_LZStart() {
asm("leave\njmp *%0" : : "r"(_imp__LZStart));
}

