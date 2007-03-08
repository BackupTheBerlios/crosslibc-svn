#include "kernel32.h"
void _elfimplib_LZInit() asm("LZInit");
void *_imp__LZInit = NULL;
__attribute__((constructor)) void _elfimplib_init_LZInit() {
load_dll_kernel32();
_imp__LZInit = (void *) _elf_GetProcAddress(_dll_kernel32, "LZInit");
}
void _elfimplib_LZInit() {
asm("leave\njmp *%0" : : "r"(_imp__LZInit));
}

