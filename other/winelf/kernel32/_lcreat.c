#include "kernel32.h"
void _elfimplib__lcreat() asm("lcreat");
void *_imp___lcreat = NULL;
__attribute__((constructor)) void _elfimplib_init__lcreat() {
load_dll_kernel32();
_imp___lcreat = (void *) _elf_GetProcAddress(_dll_kernel32, "_lcreat");
}
void _elfimplib__lcreat() {
asm("leave\njmp *%0" : : "r"(_imp___lcreat));
}

