#include "kernel32.h"
void _elfimplib_LCMapStringW() asm("LCMapStringW");
void *_imp__LCMapStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_LCMapStringW() {
load_dll_kernel32();
_imp__LCMapStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "LCMapStringW");
}
void _elfimplib_LCMapStringW() {
asm("leave\njmp *%0" : : "r"(_imp__LCMapStringW));
}

