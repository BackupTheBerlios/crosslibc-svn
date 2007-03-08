#include "kernel32.h"
void _elfimplib_FoldStringW() asm("FoldStringW");
void *_imp__FoldStringW = NULL;
__attribute__((constructor)) void _elfimplib_init_FoldStringW() {
load_dll_kernel32();
_imp__FoldStringW = (void *) _elf_GetProcAddress(_dll_kernel32, "FoldStringW");
}
void _elfimplib_FoldStringW() {
asm("leave\njmp *%0" : : "r"(_imp__FoldStringW));
}

