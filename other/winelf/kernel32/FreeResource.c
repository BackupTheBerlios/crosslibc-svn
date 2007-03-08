#include "kernel32.h"
void _elfimplib_FreeResource() asm("FreeResource");
void *_imp__FreeResource = NULL;
__attribute__((constructor)) void _elfimplib_init_FreeResource() {
load_dll_kernel32();
_imp__FreeResource = (void *) _elf_GetProcAddress(_dll_kernel32, "FreeResource");
}
void _elfimplib_FreeResource() {
asm("leave\njmp *%0" : : "r"(_imp__FreeResource));
}

