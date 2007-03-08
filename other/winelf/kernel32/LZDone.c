#include "kernel32.h"
void _elfimplib_LZDone() asm("LZDone");
void *_imp__LZDone = NULL;
__attribute__((constructor)) void _elfimplib_init_LZDone() {
load_dll_kernel32();
_imp__LZDone = (void *) _elf_GetProcAddress(_dll_kernel32, "LZDone");
}
void _elfimplib_LZDone() {
asm("leave\njmp *%0" : : "r"(_imp__LZDone));
}

