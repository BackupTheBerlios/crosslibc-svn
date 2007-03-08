#include "kernel32.h"
void _elfimplib_GlobalSize() asm("GlobalSize");
void *_imp__GlobalSize = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalSize() {
load_dll_kernel32();
_imp__GlobalSize = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalSize");
}
void _elfimplib_GlobalSize() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalSize));
}

