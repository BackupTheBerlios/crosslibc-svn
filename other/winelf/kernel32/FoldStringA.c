#include "kernel32.h"
void _elfimplib_FoldStringA() asm("FoldStringA");
void *_imp__FoldStringA = NULL;
__attribute__((constructor)) void _elfimplib_init_FoldStringA() {
load_dll_kernel32();
_imp__FoldStringA = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringA");
}
void _elfimplib_FoldStringA() {
asm("leave\njmp *%0" : : "r"(_imp__FoldStringA));
}

