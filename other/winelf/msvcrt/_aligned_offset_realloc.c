#include "msvcrt.h"
void _elfimplib__aligned_offset_realloc() asm("aligned_offset_realloc");
void *_imp___aligned_offset_realloc = NULL;
__attribute__((constructor)) void _elfimplib_init__aligned_offset_realloc() {
load_dll_msvcrt();
_imp___aligned_offset_realloc = (void *) _elf_GetProcAddress(_dll_msvcrt, "_aligned_offset_realloc");
}
void _elfimplib__aligned_offset_realloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_offset_realloc));
}

void _elfimplibmang__aligned_offset_realloc() asm("_aligned_offset_realloc");
void _elfimplibmang__aligned_offset_realloc() {
asm("leave\njmp *%0" : : "r"(_imp___aligned_offset_realloc));
}

