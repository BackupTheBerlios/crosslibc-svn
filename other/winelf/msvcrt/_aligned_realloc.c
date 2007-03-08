#include "msvcrt.h"
void _elfimplib__aligned_realloc() asm("aligned_realloc");
void *_imp___aligned_realloc = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_realloc() {
load_dll_msvcrt();
_imp___aligned_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_realloc");
}
void _elfimplib__aligned_realloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_realloc));
}

