#include "kernel32.h"
void _elfimplib_MulDiv() asm("MulDiv");
void *_imp__MulDiv = NULL;
__attribute__((constructor)) void _elfimplib_init_MulDiv() {
load_dll_kernel32();
_imp__MulDiv = (void *) _elf_GetProcAddress(_dll_kernel32, "MulDiv");
}
void _elfimplib_MulDiv() {
asm("leave\njmp *%0" : : "r"(_imp__MulDiv));
}

