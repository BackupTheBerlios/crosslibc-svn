#include "msvcrt.h"
void _elfimplib__aligned_malloc() asm("aligned_malloc");
void *_imp___aligned_malloc = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_malloc() {
load_dll_msvcrt();
_imp___aligned_malloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_malloc");
}
void _elfimplib__aligned_malloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_malloc));
}

void _elfimplibmang__aligned_malloc() asm("_aligned_malloc");
void _elfimplibmang__aligned_malloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_malloc));
}

