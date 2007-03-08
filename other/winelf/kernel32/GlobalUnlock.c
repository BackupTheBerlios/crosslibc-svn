#include "kernel32.h"
void _elfimplib_GlobalUnlock() asm("GlobalUnlock");
void *_imp__GlobalUnlock = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalUnlock() {
load_dll_kernel32();
_imp__GlobalUnlock = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnlock");
}
void _elfimplib_GlobalUnlock() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnlock));
}

