#include "kernel32.h"
void _elfimplib_GlobalUnfix() asm("GlobalUnfix");
void *_imp__GlobalUnfix = NULL;
__attribute__((constructor)) void _elfimplib_init_GlobalUnfix() {
load_dll_kernel32();
_imp__GlobalUnfix = (void *) _elf_GetProcAddress(_dll_kernel32, "GlobalUnfix");
}
void _elfimplib_GlobalUnfix() {
asm("leave\njmp *%0" : : "r"(_imp__GlobalUnfix));
}

