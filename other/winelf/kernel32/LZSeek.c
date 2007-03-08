#include "kernel32.h"
void _elfimplib_LZSeek() asm("LZSeek");
void *_imp__LZSeek = NULL;
__attribute__((constructor)) void _elfimplib_init_LZSeek() {
load_dll_kernel32();
_imp__LZSeek = (void *) _elf_GetProcAddress(_dll_kernel32, "LZSeek");
}
void _elfimplib_LZSeek() {
asm("leave\njmp *%0" : : "r"(_imp__LZSeek));
}

