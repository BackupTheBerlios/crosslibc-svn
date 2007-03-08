#include "kernel32.h"
void _elfimplib_GlobalFree() asm("GlobalFree");
void *_imp__GlobalFree = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFree() {
load_dll_kernel32();
_imp__GlobalFree = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFree");
}
void _elfimplib_GlobalFree() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFree));
}

