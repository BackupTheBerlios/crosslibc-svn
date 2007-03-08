#include "kernel32.h"
void _elfimplib__lclose() asm("lclose");
void *_imp___lclose = NULL;
__attribute__((constructor)) void _elfimplib_init__lclose() {
load_dll_kernel32();
_imp___lclose = (void *) _elf_GetProcAddress(_dll_kernel32, "_lclose");
}
void _elfimplib__lclose() {
asm("leave\njmp *%0" : : "r"(_imp___lclose));
}

