#include "msvcrt.h"
void _elfimplib__aligned_free() asm("aligned_free");
void *_imp___aligned_free = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_free() {
load_dll_msvcrt();
_imp___aligned_free = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_free");
}
void _elfimplib__aligned_free() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_free));
}

void _elfimplibmang__aligned_free() asm("_aligned_free");
void _elfimplibmang__aligned_free() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_free));
}

