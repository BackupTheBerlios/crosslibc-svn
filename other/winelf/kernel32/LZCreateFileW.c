#include "kernel32.h"
void _elfimplib_LZCreateFileW() asm("LZCreateFileW");
void *_imp__LZCreateFileW = NULL;
__attribute__((constructor)) void _elfimplib_init_LZCreateFileW() {
load_dll_kernel32();
_imp__LZCreateFileW = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCreateFileW");
}
void _elfimplib_LZCreateFileW() {
asm("leave\njmp *%0" : : "r"(_imp__LZCreateFileW));
}

