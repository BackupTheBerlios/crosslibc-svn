#include "kernel32.h"
void _elfimplib_LZClose() asm("LZClose");
void *_imp__LZClose = NULL;
__attribute__((constructor)) void _elfimplib_init_LZClose() {
load_dll_kernel32();
_imp__LZClose = (void *) _elf_GetProcAddress(_dll_kernel32, "LZClose");
}
void _elfimplib_LZClose() {
asm("leave\njmp *%0" : : "r"(_imp__LZClose));
}

