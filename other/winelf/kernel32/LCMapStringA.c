#include "kernel32.h"
void _elfimplib_LCMapStringA() asm("LCMapStringA");
void *_imp__LCMapStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_LCMapStringA() {
load_dll_kernel32();
_imp__LCMapStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringA");
}
void _elfimplib_LCMapStringA() {
asm("leave\njmp *%0" : : "r"(_imp__LCMapStringA));
}

