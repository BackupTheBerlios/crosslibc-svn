#include "kernel32.h"
void _elfimplib__lopen() asm("lopen");
void *_imp___lopen = NULL;
__attribute__((constructor)) void _elfimplib_init__lopen() {
load_dll_kernel32();
_imp___lopen = (void *) _elf_GetProcAddress(_dll_kernel32, "_lopen");
}
void _elfimplib__lopen() {
asm("leave\njmp *%0" : : "r"(_imp___lopen));
}

