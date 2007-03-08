#include "kernel32.h"
void _elfimplib_LZRead() asm("LZRead");
void *_imp__LZRead = NULL;
__attribute__((constructor)) void _elfimplib_init_LZRead() {
load_dll_kernel32();
_imp__LZRead = (void *) _elf_GetProcAddress(_dll_kernel32, "LZRead");
}
void _elfimplib_LZRead() {
asm("leave\njmp *%0" : : "r"(_imp__LZRead));
}

