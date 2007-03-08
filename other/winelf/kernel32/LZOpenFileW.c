#include "kernel32.h"
void _elfimplib_LZOpenFileW() asm("LZOpenFileW");
void *_imp__LZOpenFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_LZOpenFileW() {
load_dll_kernel32();
_imp__LZOpenFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZOpenFileW");
}
void _elfimplib_LZOpenFileW() {
asm("leave\njmp *%0" : : "r"(_imp__LZOpenFileW));
}

