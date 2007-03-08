#include "msvcrt.h"
void _elfimplib__tell() asm("tell");
void *_imp___tell = NULL;
__attribute__((constructor)) void _elfimplib_init__tell() {
load_dll_msvcrt();
_imp___tell = (void *) _elf_GetProcAddress(_dll_msvcrt, "_tell");
}
void _elfimplib__tell() {
asm("leave\njmp *%0" : : "r"(_imp___tell));
}

