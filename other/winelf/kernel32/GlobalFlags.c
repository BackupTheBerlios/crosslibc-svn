#include "kernel32.h"
void _elfimplib_GlobalFlags() asm("GlobalFlags");
void *_imp__GlobalFlags = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalFlags() {
load_dll_kernel32();
_imp__GlobalFlags = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalFlags");
}
void _elfimplib_GlobalFlags() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalFlags));
}

