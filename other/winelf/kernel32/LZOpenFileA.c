#include "kernel32.h"
void _elfimplib_LZOpenFileA() asm("LZOpenFileA");
void *_imp__LZOpenFileA = NULL;
__attribute__((constructor)) void _elfimplib_init_LZOpenFileA() {
load_dll_kernel32();
_imp__LZOpenFileA = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileA");
}
void _elfimplib_LZOpenFileA() {
asm("leave\njmp *%0" : : "r"(_imp__LZOpenFileA));
}

