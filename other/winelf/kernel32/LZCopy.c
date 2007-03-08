#include "kernel32.h"
void _elfimplib_LZCopy() asm("LZCopy");
void *_imp__LZCopy = NULL;
__attribute__((constructor)) void _elfimplib_init_LZCopy() {
load_dll_kernel32();
_imp__LZCopy = (void *) _elf_GetProcAddress(_dll_kernel32, "LZCopy");
}
void _elfimplib_LZCopy() {
asm("leave\njmp *%0" : : "r"(_imp__LZCopy));
}

